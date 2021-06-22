#pragma once

#include "winrt/Microsoft.UI.Xaml.h"
#include "winrt/Microsoft.UI.Xaml.Markup.h"
#include "winrt/Microsoft.UI.Xaml.Controls.Primitives.h"
#include "MyControl.g.h"
#include "NewControl.h"

namespace winrt::NewComponent::implementation
{
    struct MyControl : MyControlT<MyControl>
    {
        MyControl();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myControlButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::NewComponent::factory_implementation
{
    struct MyControl : MyControlT<MyControl, implementation::MyControl>
    {
    };
}
