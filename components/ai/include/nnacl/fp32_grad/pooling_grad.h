/**
 * Copyright 2020 Huawei Technologies Co., Ltd
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MINDSPORE_LITE_NNACL_FP32_GRAD_POOLING_GRAD_H_
#define MINDSPORE_LITE_NNACL_FP32_GRAD_POOLING_GRAD_H_

#include "nnacl/fp32/pooling.h"

#ifdef __cplusplus
extern "C" {
#endif
void AvgPoolingGrad(const float *input_ptr, float *output_ptr, PoolingParameter *pooling_param);
void MaxPoolingGrad(const float *dy, const int *indices_ptr, float *output_ptr, PoolingParameter *pooling_param);
#ifdef __cplusplus
}
#endif

#endif  // MINDSPORE_LITE_NNACL_FP32_GRAD_POOLING_GRAD_H_
