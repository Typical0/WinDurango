#include "pch.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.PackageInfo.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.PackageInfo.g.cpp"

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
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::Find(winrt::Windows::Xbox::ApplicationModel::State::Internal::FindPackageInfoFilter const& filter)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByDeviceId(winrt::guid const& deviceId, winrt::Windows::Xbox::ApplicationModel::State::Internal::FindPackageInfoFilter const& filter)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByContentId(winrt::guid const& contentId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByProductId(winrt::guid const& productId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByTitleId(uint32_t titleId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByAllowedProductId(winrt::guid const& allowedProductId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo PackageInfo::FindByPackageInstanceId(hstring const& packageInstanceId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindUniversalPackagesByFamilyName(hstring const& packageFamilyName)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByAllowedPackageFamilyName(hstring const& allowedPackageFamilyName)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindUnparented()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo PackageInfo::FindByFullName(hstring const& fullName)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByTitleSearchString(hstring const& searchString, uint32_t maxResults)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo PackageInfo::FindGameHub(winrt::guid const& gameHubId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindPackagesForGameHub(winrt::guid const& gameHubId)
    {
        throw hresult_not_implemented();
    }
}
