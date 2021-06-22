#include "pch.h"
#include "New.h"
#include "New.g.cpp"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly

namespace winrt::NewComponent::implementation
{
    double New::add(double firstNumber, double secondNumber)
    {
        return firstNumber + secondNumber;
    }
}
