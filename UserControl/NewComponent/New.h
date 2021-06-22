#pragma once
#include "New.g.h"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.

namespace winrt::NewComponent::implementation
{
    struct New : NewT<New>
    {
        New() = default;

        double add(double firstNumber, double secondNumber);
    };
}
namespace winrt::NewComponent::factory_implementation
{
    struct New : NewT<New, implementation::New>
    {
    };
}
