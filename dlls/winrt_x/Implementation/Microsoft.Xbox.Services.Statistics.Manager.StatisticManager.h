#pragma once
#include "Microsoft.Xbox.Services.Statistics.Manager.StatisticManager.g.h"

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

namespace winrt::Microsoft::Xbox::Services::Statistics::Manager::implementation
{
    struct StatisticManager : StatisticManagerT<StatisticManager>
    {
        StatisticManager() = default;

        static winrt::Microsoft::Xbox::Services::Statistics::Manager::StatisticManager SingletonInstance();
        void AddLocalUser(winrt::Windows::Xbox::System::User const& user);
        void RemoveLocalUser(winrt::Windows::Xbox::System::User const& user);
        void RequestFlushToService(winrt::Windows::Xbox::System::User const& user);
        void RequestFlushToService(winrt::Windows::Xbox::System::User const& user, bool isHighPriority);
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Statistics::Manager::StatisticEvent> DoWork();
        void SetStatisticNumberData(winrt::Windows::Xbox::System::User const& user, hstring const& name, double value);
        void SetStatisticIntegerData(winrt::Windows::Xbox::System::User const& user, hstring const& name, int64_t value);
        void SetStatisticStringData(winrt::Windows::Xbox::System::User const& user, hstring const& name, hstring const& value);
        winrt::Windows::Foundation::Collections::IVectorView<hstring> GetStatisticNames(winrt::Windows::Xbox::System::User const& user);
        winrt::Microsoft::Xbox::Services::Statistics::Manager::StatisticValue GetStatistic(winrt::Windows::Xbox::System::User const& user, hstring const& name);
        void DeleteStatistic(winrt::Windows::Xbox::System::User const& user, hstring const& name);
        void GetLeaderboard(winrt::Windows::Xbox::System::User const& user, hstring const& statName, winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardQuery const& query);
        void GetSocialLeaderboard(winrt::Windows::Xbox::System::User const& user, hstring const& statName, hstring const& socialGroup, winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardQuery const& query);
    };
}
namespace winrt::Microsoft::Xbox::Services::Statistics::Manager::factory_implementation
{
    struct StatisticManager : StatisticManagerT<StatisticManager, implementation::StatisticManager>
    {
    };
}
