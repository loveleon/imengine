/*
 *  Copyright (c) 2016, https://github.com/nebula-im/imengine
 *  All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef IMENGINGE_DAL_USER_DIALOG_DAO_H_
#define IMENGINGE_DAL_USER_DIALOG_DAO_H_

#include "dal/user_dialog_do.h"

struct UserDialogDAO : public BaseDAO {
  virtual ~UserDialogDAO() = default;
  
  static UserDialogDAO& GetInstance();
  
  virtual int CheckExists(const std::string& user_id,
                          const std::string& peer_id,
                          uint32_t peer_type) = 0;
  
  virtual int64_t Create(UserDialogDO& user_dialog) = 0;
  
  virtual int LoadUserDialogList(const std::string& user_id,
                                 uint64_t loaded_time,
                                 int load_mode,
                                 uint32_t load_limit,
                                 UserDialogDOList& user_dialogs) = 0;
  
  // 阻止和取消
  virtual int UpdateBlock(const std::string& user_id,
                          const std::string& peer_id,
                          uint32_t peer_type,
                          bool is_block) = 0;

  // 置顶和取消
  virtual int UpdateTop(const std::string& user_id,
                          const std::string& peer_id,
                          uint32_t peer_type,
                          bool is_block) = 0;

  // 屏蔽和取消
  virtual int UpdateDnd(const std::string& user_id,
                          const std::string& peer_id,
                          uint32_t peer_type,
                          bool is_block) = 0;
};

#endif
