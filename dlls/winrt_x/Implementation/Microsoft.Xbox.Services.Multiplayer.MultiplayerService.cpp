#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerService.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerService.g.cpp"

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

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    winrt::event_token MultiplayerService::MultiplayerSessionChanged(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionChangeEventArgs> const& __param0)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerService::MultiplayerSessionChanged(winrt::event_token const& __param0) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::event_token MultiplayerService::MultiplayerSubscriptionLost(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSubscriptionLostEventArgs> const& __param0)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerService::MultiplayerSubscriptionLost(winrt::event_token const& __param0) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession> MultiplayerService::WriteSessionAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession multiplayerSession, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionWriteMode multiplayerSessionWriteMode)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Multiplayer::WriteSessionResult> MultiplayerService::TryWriteSessionAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession multiplayerSession, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionWriteMode multiplayerSessionWriteMode)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession> MultiplayerService::WriteSessionByHandleAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession multiplayerSession, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionWriteMode multiplayerSessionWriteMode, hstring handleId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Multiplayer::WriteSessionResult> MultiplayerService::TryWriteSessionByHandleAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession multiplayerSession, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionWriteMode multiplayerSessionWriteMode, hstring handleId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession> MultiplayerService::GetCurrentSessionAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference sessionReference)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession> MultiplayerService::GetCurrentSessionByHandleAsync(hstring handleId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionStates>> MultiplayerService::GetSessionsAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerGetSessionsRequest getSessionsRequest)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionStates>> MultiplayerService::GetSessionsAsync(hstring serviceConfigurationId, hstring sessionTemplateNameFilter, hstring xboxUserIdFilter, hstring keywordFilter, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility visibilityFilter, uint32_t contractVersionFilter, bool includePrivateSessions, bool includeReservations, bool includeInactiveSessions, uint32_t maxItems)
    {
        co_await winrt::resume_background( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionStates>> MultiplayerService::GetSessionsForUsersFilterAsync(hstring serviceConfigurationId, hstring sessionTemplateNameFilter, winrt::Windows::Foundation::Collections::IVectorView<hstring> xboxUserIdsFilter, hstring keywordFilter, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility visibilityFilter, uint32_t contractVersionFilter, bool includePrivateSessions, bool includeReservations, bool includeInactiveSessions, uint32_t maxItems)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction MultiplayerService::SetActivityAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference sessionReference)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<hstring> MultiplayerService::SetTransferHandleAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference targetSessionReference, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference originSessionReference)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction MultiplayerService::SetSearchHandleAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSearchHandleRequest searchHandleRequest)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction MultiplayerService::ClearActivityAsync(hstring serviceConfigurationId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction MultiplayerService::ClearSearchHandleAsync(hstring handleId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<hstring>> MultiplayerService::SendInvitesAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference sessionReference, winrt::Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds, uint32_t titleId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<hstring>> MultiplayerService::SendInvitesAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference sessionReference, winrt::Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds, uint32_t titleId, hstring contextStringId, hstring activationContext)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerActivityDetails>> MultiplayerService::GetActivitiesForSocialGroupAsync(hstring serviceConfigurationId, hstring socialGroupOwnerXboxUserId, hstring socialGroup)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerActivityDetails>> MultiplayerService::GetActivitiesForUsersAsync(hstring serviceConfigurationId, winrt::Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSearchHandleDetails>> MultiplayerService::GetSearchHandlesAsync(hstring serviceConfigurationId, hstring sessionTemplateName, hstring orderBy, bool orderAscending, hstring searchFilter)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSearchHandleDetails>> MultiplayerService::GetSearchHandlesAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerQuerySearchHandleRequest searchHandleRequest)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerService::EnableMultiplayerSubscriptions()
    {
        throw hresult_not_implemented();
    }
    void MultiplayerService::DisableMultiplayerSubscriptions()
    {
        throw hresult_not_implemented();
    }
    bool MultiplayerService::MultiplayerSubscriptionsEnabled()
    {
        throw hresult_not_implemented();
    }
}
