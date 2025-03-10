#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechRecognizerAnalyzer.g.h"

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
    struct SpeechRecognizerAnalyzer
    {
        SpeechRecognizerAnalyzer() = default;

        static winrt::Windows::Foundation::IAsyncAction SerializeGrammarsToFolderAsync(winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer speechRecognizer, winrt::Windows::Foundation::Uri destinationFolder, winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarRuleInclusionMode inclusionMode);
        static winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResult> CheckResultFromPhraseAsync(winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer speechRecognizer, hstring phrase);
        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Speech::Recognition::SpeechPronunciationDetail> GetPronunciationFromPhrase(winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer const& speechRecognizer, hstring const& phrase);
    };
}
namespace winrt::Windows::Xbox::Speech::Recognition::factory_implementation
{
    struct SpeechRecognizerAnalyzer : SpeechRecognizerAnalyzerT<SpeechRecognizerAnalyzer, implementation::SpeechRecognizerAnalyzer>
    {
    };
}
