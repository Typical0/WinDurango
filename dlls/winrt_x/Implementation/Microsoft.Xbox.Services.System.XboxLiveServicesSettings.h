#pragma once
#include "Microsoft.Xbox.Services.System.XboxLiveServicesSettings.g.h"

// WARNING: This file is automatically generated by a tool. Do not directly
// add this file to your project, as any changes you make will be lost.
// This file is a stub you can use as a starting point for your implementation.
//
// To add a copy of this file to your project:
//   1. Copy this file from its original location to the location where you store 
//      your other source files (e.g. the project root). 
//   2. Add the copied file to your project. In Visual Studio, you can use 
//      Project -> Add Existing Item.
//   3. Delete this comment and the 'static_assert' (below) from the copied file.
//      Do not modify the original file.
//
// To update an existing file in your project:
//   1. Copy the relevant changes from this file and merge them into the copy 
//      you made previously.
//    
// This assertion helps prevent accidental modification of generated files.
////////

namespace winrt::Microsoft::Xbox::Services::System::implementation
{
    struct XboxLiveServicesSettings : XboxLiveServicesSettingsT<XboxLiveServicesSettings>
    {
        XboxLiveServicesSettings() = default;

        static winrt::Microsoft::Xbox::Services::System::XboxLiveServicesSettings SingletonInstance();
        winrt::event_token LogCallRouted(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::XboxLiveLogCallEventArgs> const& __param0);
        void LogCallRouted(winrt::event_token const& __param0) noexcept;
        winrt::Microsoft::Xbox::Services::XboxServicesDiagnosticsTraceLevel DiagnosticsTraceLevel();
        void DiagnosticsTraceLevel(winrt::Microsoft::Xbox::Services::XboxServicesDiagnosticsTraceLevel const& value);
        winrt::event_token WnsEventRecevied(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::XboxLiveWnsEventArgs> const& __param0);
        void WnsEventRecevied(winrt::event_token const& __param0) noexcept;
    };
}
namespace winrt::Microsoft::Xbox::Services::System::factory_implementation
{
    struct XboxLiveServicesSettings : XboxLiveServicesSettingsT<XboxLiveServicesSettings, implementation::XboxLiveServicesSettings>
    {
    };
}
