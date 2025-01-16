#include "pch.h"
#include "Microsoft.Xbox.Services.UserStatistics.UserStatisticsService.h"
#include "Microsoft.Xbox.Services.UserStatistics.UserStatisticsService.g.cpp"

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
////////static_assert(false, "This file is generated by a tool and will be overwritten. Open this error and view the comment for assistance.");

namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    winrt::event_token UserStatisticsService::StatisticChanged(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::UserStatistics::StatisticChangeEventArgs> const& __param0)
    {
        throw hresult_not_implemented();
    }
    void UserStatisticsService::StatisticChanged(winrt::event_token const& __param0) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::UserStatistics::UserStatisticsResult> UserStatisticsService::GetSingleUserStatisticsAsync(hstring xboxUserId, hstring serviceConfigurationId, hstring statisticName)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::UserStatistics::UserStatisticsResult> UserStatisticsService::GetSingleUserStatisticsAsync(hstring xboxUserId, hstring serviceConfigurationId, winrt::Windows::Foundation::Collections::IVectorView<hstring> statisticNames)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::UserStatistics::UserStatisticsResult>> UserStatisticsService::GetMultipleUserStatisticsAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds, hstring serviceConfigurationId, winrt::Windows::Foundation::Collections::IVectorView<hstring> statisticNames)
    {
		for (uint32_t i = 0; i < statisticNames.Size( ); i++) {
			printf("[UserStatisticsService] GetMultipleUserStatisticsAsync [Statistic (%u)] [%ls]\n", i, statisticNames.GetAt(i).c_str( ));
		}

		co_return winrt::single_threaded_vector<UserStatisticsResult>( ).GetView( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::UserStatistics::UserStatisticsResult>> UserStatisticsService::GetMultipleUserStatisticsForMultipleServiceConfigurationsAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds, winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::UserStatistics::RequestedStatistics> requestedServiceConfigurationStatisticsCollection)
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::UserStatistics::StatisticChangeSubscription UserStatisticsService::SubscribeToStatisticChange(hstring const& xboxUserId, hstring const& serviceConfigurationId, hstring const& statisticName)
    {
        throw hresult_not_implemented();
    }
    void UserStatisticsService::UnsubscribeFromStatisticChange(winrt::Microsoft::Xbox::Services::UserStatistics::StatisticChangeSubscription const& subscription)
    {
        throw hresult_not_implemented();
    }
}
