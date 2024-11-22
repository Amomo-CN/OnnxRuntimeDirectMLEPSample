// Windows headers
#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <d3d12.h>
#include <dxgi1_6.h>
#include <wrl/client.h>

// C++ Standard headers
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <numeric>
#include <functional>
#include <utility>
#include <string_view>
#include <span>
#include <optional>
#include <memory>
#include <charconv>
#include <cassert>

// ONNX Runtime headers
#include "headers/onnxruntime_c_api.h"
#include "headers/cpu_provider_factory.h"
#include "headers/dml_provider_factory.h"
#include "headers/onnxruntime_cxx_api.h"

// Local headers
#include "FloatSupport.h"

int main(int argc, char *argv[])
{
    if (argc <= 1)
    {
        printf(
            "Usage:\n"
            "   OnnxRuntimeDirectMLCpp.exe SomePath/SomeOnnxModel.onnx\n"
            "\n"
            "Try the included Upsample4xOpset11.onnx.\n");
        return EXIT_FAILURE;
    }

    const char *modelFilePath = argv[1];

    // ... 其余代码保持不变
}
