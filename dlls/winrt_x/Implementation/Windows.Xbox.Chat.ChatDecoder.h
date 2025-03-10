#pragma once
#include "Windows.Xbox.Chat.ChatDecoder.g.h"

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

namespace winrt::Windows::Xbox::Chat::implementation
{
    struct ChatDecoder : ChatDecoderT<ChatDecoder>
    {
        ChatDecoder() = default;

        winrt::Windows::Xbox::Chat::IFormat Format();
        void Decode(winrt::Windows::Storage::Streams::IBuffer const& buffer, winrt::Windows::Storage::Streams::IBuffer& decodedBuffer);
        int32_t IsDataInFlight();
    };
}
namespace winrt::Windows::Xbox::Chat::factory_implementation
{
    struct ChatDecoder : ChatDecoderT<ChatDecoder, implementation::ChatDecoder>
    {
    };
}
