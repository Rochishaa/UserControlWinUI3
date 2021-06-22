#include "pch.h"
#include "NewControl.h"
#if __has_include("NewControl.g.cpp")
#include "NewControl.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::NewComponent::implementation
{
    Microsoft::UI::Xaml::DependencyProperty NewControl::m_labelProperty =
        Microsoft::UI::Xaml::DependencyProperty::Register(
            L"Label",
            winrt::xaml_typename<winrt::hstring>(),
            winrt::xaml_typename<NewComponent::NewControl>(),
            Microsoft::UI::Xaml::PropertyMetadata{ winrt::box_value(L"default label"), Microsoft::UI::Xaml::PropertyChangedCallback{ &NewControl::OnLabelChanged } }
    );

    void NewControl::OnLabelChanged(Microsoft::UI::Xaml::DependencyObject const& d, Microsoft::UI::Xaml::DependencyPropertyChangedEventArgs const& /* e */)
    {
        if (NewComponent::NewControl theControl{ d.try_as<NewComponent::NewControl>() })
        {
            // Call members of the projected type via theControl.

            NewComponent::implementation::NewControl* ptr{ winrt::get_self<NewComponent::implementation::NewControl>(theControl) };
            // Call members of the implementation type via ptr.
        }
    }
}
