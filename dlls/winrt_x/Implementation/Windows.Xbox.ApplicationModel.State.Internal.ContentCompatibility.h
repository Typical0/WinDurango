#pragma once
#include "Windows.Xbox.ApplicationModel.State.Internal.ContentCompatibility.g.h"

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

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    struct ContentCompatibility : ContentCompatibilityT<ContentCompatibility>
    {
        ContentCompatibility() = default;

        winrt::hresult IsContentCompatible(winrt::guid const& contentId);
        winrt::hresult IsContentCompatible(hstring const& productId);
        uint64_t GetQuickResumeFlags(uint32_t titleId);
        bool IsQuickResumeAllowedForEra(uint32_t titleId);
        bool IsQuickResumeBlockedForGameCore(uint32_t titleId);
        winrt::hresult IsXbox360ContentCompatible(winrt::guid const& legacyProductId);
        hstring GetXbox360StoreIdFromContentId(winrt::guid const& contentId);
        bool IsQuickResumeBlockedForServer(uint32_t titleId);
        uint32_t GetMacIdBehaviorForTitleOnServer(uint32_t titleId);
    };
}
namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::factory_implementation
{
    struct ContentCompatibility : ContentCompatibilityT<ContentCompatibility, implementation::ContentCompatibility>
    {
    };
}
