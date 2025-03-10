#include "pch.h"
#include "Windows.Xbox.Management.Deployment.ContentInstallManager.h"
#include "Windows.Xbox.Management.Deployment.ContentInstallManager.g.cpp"

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

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    void ContentInstallManager::StartInstall(hstring const& source, winrt::guid const& contentId, winrt::Windows::Xbox::Management::Deployment::IContentMetadata const& metadata, winrt::Windows::Xbox::Management::Deployment::InstallUpdateBehavior const& update)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::QueueInstall(hstring const& source, winrt::guid const& contentId, winrt::Windows::Xbox::Management::Deployment::IContentMetadata const& metadata, winrt::Windows::Xbox::Management::Deployment::InstallUpdateBehavior const& update)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::Uninstall(hstring const& packageInstanceId)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::CancelInstall(hstring const& packageInstanceId)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::PauseInstall(hstring const& packageInstanceId)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::ResumeInstall(hstring const& packageInstanceId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction ContentInstallManager::RegistrationAsync(hstring packageInstanceId, uint32_t timeout)
    {
        throw hresult_not_implemented();
    }
    bool ContentInstallManager::IsInstalled(winrt::guid const& contentId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::InstallQueueItemState ContentInstallManager::GetQueuedItemState(hstring const& packageInstanceId)
    {
        throw hresult_not_implemented();
    }
    winrt::hresult ContentInstallManager::GetQueuedItemError(hstring const& packageInstanceId)
    {
        throw hresult_not_implemented();
    }
    float ContentInstallManager::GetQueuedItemInstallationProgress(hstring const& packageInstanceId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::InstallQueueItemInstallationType ContentInstallManager::GetQueuedItemInstallationType(hstring const& packageInstanceId)
    {
        throw hresult_not_implemented();
    }
    uint64_t ContentInstallManager::GetQueuedItemPackageSize(hstring const& packageInstanceId)
    {
        throw hresult_not_implemented();
    }
    uint64_t ContentInstallManager::GetQueuedUpdateDiskSpaceRequired(hstring const& packageInstanceId)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::GetPackagePersistentLocalStorageInfoById(hstring const& packageInstanceId, uint64_t& persistentLocalStorageSize, bool& allocated)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::DeletePackagePersistentLocalStorageById(winrt::guid const& contentId)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::GetPackageSharedStorageInfoById(winrt::guid const& contentId, uint64_t& sharedStorageSize, bool& allocated)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::GetPackageAppSpecificStorageById(hstring const& packageInstanceId, uint64_t& appSpecificSize)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::RegistrationState ContentInstallManager::GetPackageRegistrationState(hstring const& packageInstanceId)
    {
        throw hresult_not_implemented();
    }
    hstring ContentInstallManager::GetPackageRegionSpecifier(hstring const& packageInstanceId, winrt::Windows::Xbox::Management::Deployment::RegionSpecifierKey const& key, winrt::Windows::Xbox::Management::Deployment::RegionSpecifierType const& type)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::StartPackageCopyFromStorage(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& packageInstanceIds, winrt::guid const& destDeviceId)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::StartPackageMoveFromStorage(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& packageInstanceIds, winrt::guid const& destDeviceId)
    {
        throw hresult_not_implemented();
    }
    winrt::guid ContentInstallManager::FindDeviceWithAvailableSpaceForQueuedPackage(hstring const& packageInstanceId)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::ReQueuePackageInstallToDevice(hstring const& packageInstanceId, winrt::guid const& deviceId)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::StartGroupInstall(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IContentInstallationInfo> const& value, winrt::Windows::Xbox::Management::Deployment::InstallUpdateBehavior const& update)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::QueueGroupInstall(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IContentInstallationInfo> const& value, winrt::Windows::Xbox::Management::Deployment::InstallUpdateBehavior const& update)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::QueueGroupLanInstall(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IContentInstallationInfo> const& value, winrt::Windows::Xbox::Management::Deployment::InstallUpdateBehavior const& update, winrt::guid const& destDeviceId)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::QueueGroupInstallByOneStoreProductId(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& value)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::QueryPackageUpgrade(winrt::guid const& productId, bool& isUpgraded, hstring& upgradedPackageFamilyName)
    {
        throw hresult_not_implemented();
    }
    uint32_t ContentInstallManager::GetInstallingItemCountForDisc(hstring const& discSetId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> ContentInstallManager::GetShrinkablePackages()
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::GetTrimmedPackageSize(hstring const& packageInstanceId, uint64_t& currentPackageSize, uint64_t& trimmedPackageSize)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::TrimPackage(hstring const& packageInstanceId)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::PauseAllInstalls()
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::ResumeAllInstalls()
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::CancelAllInstalls()
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::StartPackageCopyFromStorage(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& packageInstanceIds, winrt::guid const& destDeviceId, hstring const& applicationId)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::StartPackageMoveFromStorage(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& packageInstanceIds, winrt::guid const& destDeviceId, hstring const& applicationId)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::StartInstall(hstring const& source, winrt::guid const& contentId, winrt::Windows::Xbox::Management::Deployment::IContentMetadata const& metadata, winrt::Windows::Xbox::Management::Deployment::InstallUpdateBehavior const& update, winrt::guid const& destDeviceId)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::QueueInstall(hstring const& source, winrt::guid const& contentId, winrt::Windows::Xbox::Management::Deployment::IContentMetadata const& metadata, winrt::Windows::Xbox::Management::Deployment::InstallUpdateBehavior const& update, winrt::guid const& destDeviceId)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::StartGroupInstall(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IContentInstallationInfo> const& value, winrt::Windows::Xbox::Management::Deployment::InstallUpdateBehavior const& update, winrt::guid const& destDeviceId)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::QueueGroupInstall(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IContentInstallationInfo> const& value, winrt::Windows::Xbox::Management::Deployment::InstallUpdateBehavior const& update, winrt::guid const& destDeviceId)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::QueueGroupInstallByOneStoreProductId(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& value, winrt::guid const& destDeviceId)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::GetPersistentLocalStorageInfoById(hstring const& packageInstanceId, uint64_t& persistentLocalStorageSize, bool& allocated, uint32_t& xcrdId)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::DeletePersistentLocalStorageById(hstring const& packageInstanceId)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::GetPersistentLocalStorageDeviceInfoById(hstring const& packageInstanceId, uint64_t& size, bool& allocated, winrt::guid& deviceId)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::QueueGroupInstallByOneStoreProductId(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& value, winrt::guid const& destDeviceId, hstring const& applicationId)
    {
        throw hresult_not_implemented();
    }
    void ContentInstallManager::PreIndexCloudPackage(winrt::guid const& contentId, hstring const& oneStoreProductId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction ContentInstallManager::InstallWithAppInfoAsync(winrt::Windows::Xbox::ApplicationModel::State::Internal::IAppInfo appInfo, bool installDlc)
    {
        throw hresult_not_implemented();
    }
}
