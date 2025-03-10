#pragma once
#include "Windows.Kinect.BodyFrameReader.g.h"

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
//

namespace winrt::Windows::Kinect::implementation
{
    struct BodyFrameReader : BodyFrameReaderT<BodyFrameReader>
    {
        BodyFrameReader() = default;

        void Close();
        winrt::event_token FrameArrived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::BodyFrameReader, winrt::Windows::Kinect::BodyFrameArrivedEventArgs> const& value);
        void FrameArrived(winrt::event_token const& token) noexcept;
        winrt::Windows::Kinect::BodyFrame AcquireLatestFrame();
        bool IsPaused();
        void IsPaused(bool isPaused);
        winrt::Windows::Kinect::BodyFrameSource BodyFrameSource();
    };
}
