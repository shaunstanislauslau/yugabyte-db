// Copyright (c) YugaByte, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except
// in compliance with the License.  You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software distributed under the License
// is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express
// or implied.  See the License for the specific language governing permissions and limitations
// under the License.
//

// Generates declarations (prototypes) of C functions based on our C++/PostgreSQL interface DSL.

#ifndef YB_YQL_PGGATE_PG_IF_C_DECL_H
#define YB_YQL_PGGATE_PG_IF_C_DECL_H

#ifdef __cplusplus
extern "C" {
#endif

#include "yb/yql/pggate/if_macros_c_wrapper_decl.h"
#include "yb/yql/pggate/pggate_if.h"
#include "yb/yql/pggate/if_macros_undef.h"

#ifdef __cplusplus
}  // extern "C"
#endif

#endif  // YB_YQL_PGGATE_PG_IF_C_DECL_H
