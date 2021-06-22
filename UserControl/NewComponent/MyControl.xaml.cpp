#include "pch.h"
#include "MyControl.xaml.h"
#if __has_include("MyControl.g.cpp")
#include "MyControl.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::NewComponent::implementation
{
    MyControl::MyControl()
    {
        InitializeComponent();
    }

    int32_t MyControl::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MyControl::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void MyControl::myControlButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        myControlButton().Content(box_value(L"Clicked"));
    }
}
