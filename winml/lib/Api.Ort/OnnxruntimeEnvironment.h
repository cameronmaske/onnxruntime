// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#pragma once

#include "adapter/winml_adapter_c_api.h"

#pragma warning(push)
#pragma warning(disable : 4505)

namespace Windows::AI ::MachineLearning {

using UniqueOrtEnv = std::unique_ptr<OrtEnv, void (*)(OrtEnv*)>;

class OnnxruntimeEnvironment {
 public:
  OnnxruntimeEnvironment(const OrtApi* ort_api);

  HRESULT GetOrtEnvironment(_Out_ OrtEnv** ert_env);

 private:
  UniqueOrtEnv ort_env_;
};

}  // namespace Windows::AI::MachineLearning

#pragma warning(pop)