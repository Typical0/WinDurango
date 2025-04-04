#pragma once
#include "Microsoft.Xbox.Services.XboxLiveContextSettings.g.h"

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
////

namespace winrt::Microsoft::Xbox::Services::implementation
{
    struct XboxLiveContextSettings : XboxLiveContextSettingsT<XboxLiveContextSettings>
    {
        XboxLiveContextSettings() = default;

        winrt::event_token ServiceCallRouted(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::XboxServiceCallRoutedEventArgs> const& __param0);
        void ServiceCallRouted(winrt::event_token const& __param0) noexcept;
        bool EnableServiceCallRoutedEvents();
        void EnableServiceCallRoutedEvents(bool value);
        winrt::Microsoft::Xbox::Services::XboxServicesDiagnosticsTraceLevel DiagnosticsTraceLevel();
        void DiagnosticsTraceLevel(winrt::Microsoft::Xbox::Services::XboxServicesDiagnosticsTraceLevel const& value);
        winrt::Windows::Foundation::TimeSpan HttpTimeout();
        void HttpTimeout(winrt::Windows::Foundation::TimeSpan const& value);
        winrt::Windows::Foundation::TimeSpan LongHttpTimeout();
        void LongHttpTimeout(winrt::Windows::Foundation::TimeSpan const& value);
        winrt::Windows::Foundation::TimeSpan HttpRetryDelay();
        void HttpRetryDelay(winrt::Windows::Foundation::TimeSpan const& value);
        winrt::Windows::Foundation::TimeSpan HttpTimeoutWindow();
        void HttpTimeoutWindow(winrt::Windows::Foundation::TimeSpan const& value);
        winrt::Windows::Foundation::TimeSpan WebsocketTimeoutWindow();
        void WebsocketTimeoutWindow(winrt::Windows::Foundation::TimeSpan const& value);
        bool UseCoreDispatcherForEventRouting();
        void UseCoreDispatcherForEventRouting(bool value);
        void DisableAssertsForXboxLiveThrottlingInDevSandboxes(winrt::Microsoft::Xbox::Services::XboxLiveContextThrottleSetting const& setting);
        void DisableAssertsForMaximumNumberOfWebsocketsActivated(winrt::Microsoft::Xbox::Services::XboxLiveContextRecommendedSetting const& setting);
    };
}
namespace winrt::Microsoft::Xbox::Services::factory_implementation
{
    struct XboxLiveContextSettings : XboxLiveContextSettingsT<XboxLiveContextSettings, implementation::XboxLiveContextSettings>
    {
    };
}
