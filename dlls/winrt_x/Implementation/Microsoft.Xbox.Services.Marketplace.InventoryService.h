#pragma once
#include "Microsoft.Xbox.Services.Marketplace.InventoryService.g.h"

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

namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    struct InventoryService : InventoryServiceT<InventoryService>
    {
        InventoryService() = default;

        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> GetInventoryItemsAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> GetInventoryItemsAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> productIds, bool expandSatisfyingEntitlements);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> GetInventoryItemsAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, bool expandSatisfyingEntitlements, bool includeAllItemStatesAndAvailabilities);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> GetInventoryItemsAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemState inventoryItemState, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> GetInventoryItemsAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemState inventoryItemState, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems, bool expandSatisfyingEntitlements);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> GetInventoryItemsForAllUsersAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> GetInventoryItemsForAllUsersAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, bool expandSatisfyingEntitlements, bool includeAllItemStatesAndAvailabilities);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> GetInventoryItemsForAllUsersAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemState inventoryItemState, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> GetInventoryItemsForAllUsersAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemState inventoryItemState, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems, bool expandSatisfyingEntitlements);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> GetInventoryItemsForAllUsersAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> productIds, bool expandSatisfyingEntitlements);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItem> GetInventoryItemAsync(winrt::Microsoft::Xbox::Services::Marketplace::InventoryItem inventoryItem);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::ConsumeInventoryItemResult> ConsumeInventoryItemAsync(winrt::Microsoft::Xbox::Services::Marketplace::InventoryItem inventoryItem, uint32_t quantityToConsume, hstring transactionId);
    };
}
