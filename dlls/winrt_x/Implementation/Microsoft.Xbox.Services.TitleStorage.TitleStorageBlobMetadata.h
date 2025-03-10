#pragma once
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobMetadata.g.h"

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

namespace winrt::Microsoft::Xbox::Services::TitleStorage::implementation
{
    struct TitleStorageBlobMetadata : TitleStorageBlobMetadataT<TitleStorageBlobMetadata>
    {
        TitleStorageBlobMetadata() = default;

        TitleStorageBlobMetadata(hstring const& serviceConfigurationId, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType const& storageType, hstring const& blobPath, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobType const& blobType, hstring const& xboxUserId);
        TitleStorageBlobMetadata(hstring const& serviceConfigurationId, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType const& storageType, hstring const& blobPath, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobType const& blobType, hstring const& xboxUserId, hstring const& displayName, hstring const& eTag);
        TitleStorageBlobMetadata(hstring const& serviceConfigurationId, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType const& storageType, hstring const& blobPath, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobType const& blobType, hstring const& xboxUserId, hstring const& displayName, hstring const& eTag, winrt::Windows::Foundation::DateTime const& clientTimestamp);
        static winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadata CreateTitleStorageBlobMetadataForSessionStorage(hstring const& serviceConfigurationId, hstring const& blobPath, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobType const& blobType, hstring const& multiplayerSessionTemplateName, hstring const& multiplayerSessionName, hstring const& displayName, hstring const& eTag);
        hstring BlobPath();
        winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobType BlobType();
        winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType StorageType();
        hstring DisplayName();
        hstring ETag();
        winrt::Windows::Foundation::DateTime ClientTimestamp();
        void set(winrt::Windows::Foundation::DateTime const& value);
        uint64_t Length();
        hstring ServiceConfigurationId();
        hstring XboxUserId();
        hstring MultiplayerSessionTemplateName();
        hstring MultiplayerSessionName();
    };
}
namespace winrt::Microsoft::Xbox::Services::TitleStorage::factory_implementation
{
    struct TitleStorageBlobMetadata : TitleStorageBlobMetadataT<TitleStorageBlobMetadata, implementation::TitleStorageBlobMetadata>
    {
    };
}
