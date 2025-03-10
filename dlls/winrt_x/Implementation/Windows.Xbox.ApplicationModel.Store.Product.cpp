#include "pch.h"
#include "Windows.Xbox.ApplicationModel.Store.Product.h"
#include "Windows.Xbox.ApplicationModel.Store.Product.g.cpp"
#include "Windows.Xbox.ApplicationModel.Store.ProductPurchasedEventArgs.h"

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
//////////

namespace winrt::Windows::Xbox::ApplicationModel::Store::implementation
{
    winrt::Windows::Foundation::IAsyncAction Product::ShowPurchaseAsync(winrt::Windows::Xbox::System::IUser requestingUser, hstring offer)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Product::ShowDetailsAsync(winrt::Windows::Xbox::System::IUser requestingUser, hstring productId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Product::ShowMarketplaceAsync(winrt::Windows::Xbox::System::IUser requestingUser, winrt::Windows::Xbox::ApplicationModel::Store::ProductItemTypes inputProductItemType, hstring inputProductId, winrt::Windows::Xbox::ApplicationModel::Store::ProductItemTypes resultProductItemTypes)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Product::ShowRedeemCodeAsync(winrt::Windows::Xbox::System::IUser user, hstring offer)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Product::ShowSubscriptionAsync(winrt::Windows::Xbox::System::IUser user, hstring productId, uint32_t privilegeId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult> Product::CheckPrivilegeAsync(winrt::Windows::Xbox::System::IUser user, uint32_t privilegeId, bool attemptResolution, hstring friendlyDisplay)
    {
        auto args = winrt::make<implementation::ProductPurchasedEventArgs>( );
        co_return PrivilegeCheckResult::NoIssue;
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult> Product::CheckPrivilegesAsync(winrt::Windows::Xbox::System::IUser user, winrt::Windows::Foundation::Collections::IVectorView<uint32_t> privilegeIds, bool attemptResolution, hstring friendlyDisplay)
    {
        auto args = winrt::make<implementation::ProductPurchasedEventArgs>( );
        co_return PrivilegeCheckResult::NoIssue;
    }
    winrt::event_token Product::ProductPurchased(winrt::Windows::Xbox::ApplicationModel::Store::ProductPurchasedEventHandler const& handler)
    {
        return m_productPurchasedEvent.add(handler);
    }
    void Product::ProductPurchased(winrt::event_token const& token) noexcept
    {
        m_productPurchasedEvent.remove(token);
    }
    winrt::Windows::Foundation::IAsyncAction Product::ShowPurchaseForStoreIdAsync(winrt::Windows::Xbox::System::IUser requestingUser, hstring storeId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Product::ShowDetailsForStoreIdAsync(winrt::Windows::Xbox::System::IUser requestingUser, hstring storeId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Product::ShowUpsellAsync(winrt::Windows::Xbox::System::IUser requestingUser, uint32_t privilegeId, hstring prioritizedSku, uint32_t upsellEntryPoint, hstring referProductId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Product::ShowUpsellThirdPartyNoticeAsync(winrt::Windows::Xbox::System::IUser requestingUser)
    {
        throw hresult_not_implemented();
    }
}
