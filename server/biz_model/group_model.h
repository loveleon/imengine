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

#ifndef BIZ_MODEL_GROUP_MODEL_H_
#define BIZ_MODEL_GROUP_MODEL_H_

#include <string>
#include <list>

class GroupModel {
public:
  ~GroupModel() = default;
  
  static GroupModel& GetInstance();
  
  int CreateIfNotExists(const std::string& creator_user_id,
                        uint64_t rid,
                        const std::string& title,
                        const std::list<std::string>& member_list,
                        std::string* group_id);
};


#endif
