#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechRecognitionResultDetail.g.h"

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


namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechRecognitionResultDetail : SpeechRecognitionResultDetailT<SpeechRecognitionResultDetail>
    {
        SpeechRecognitionResultDetail() = default;

        winrt::Windows::Foundation::Collections::IVectorView<hstring> RuleStack();
        float ConfidenceScore();
        hstring Pronunciation();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResultToken> Tokens();
        uint64_t AudioPosition();
        uint32_t AudioSize();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResultBodyCorrelation> BodyCorrelation();
    };
}
