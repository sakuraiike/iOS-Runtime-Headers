/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString, TIDocumentState, TIKeyboardCandidate, TIKeyboardLayout, TIKeyboardLayoutState, TITextInputTraits;

@interface TIKeyboardState : NSObject <NSCopying, NSSecureCoding> {
    union { 
        int integerValue; 
        struct { 
            unsigned int userSelectedCurrentCandidate : 1; 
            unsigned int shouldSkipCandidateSelection : 1; 
            unsigned int suppressingCandidateSelection : 1; 
            unsigned int needsCandidateMetadata : 1; 
            unsigned int keyboardEventsLagging : 1; 
            unsigned int hardwareKeyboardMode : 1; 
            unsigned int splitKeyboardMode : 1; 
            unsigned int wordLearningEnabled : 1; 
            unsigned int autocorrectionEnabled : 1; 
            unsigned int shortcutConversionEnabled : 1; 
            unsigned int typologyLoggingEnabled : 1; 
            unsigned int autocapitalizationEnabled : 1; 
        } fields; 
    union { 
        int integerValue; 
        struct { 
            unsigned int displayed : 1; 
            unsigned int autoDisplayMode : 1; 
        } fields; 
    } _autocorrectionListUIState;
    NSString *_clientIdentifier;
    TIKeyboardCandidate *_currentCandidate;
    TIDocumentState *_documentState;
    NSString *_inputForMarkedText;
    NSString *_inputMode;
    TIKeyboardLayout *_keyLayout;
    TIKeyboardLayoutState *_layoutState;
    } _mask;
    NSString *_recipientIdentifier;
    NSString *_responseContext;
    NSString *_searchStringForMarkedText;
    int _shiftState;
    TITextInputTraits *_textInputTraits;
}

@property BOOL autocapitalizationEnabled;
@property unsigned int autocapitalizationType;
@property BOOL autocorrectionEnabled;
@property BOOL autocorrectionListUIAutoDisplayMode;
@property BOOL autocorrectionListUIDisplayed;
@property(copy) NSString * clientIdentifier;
@property(retain) TIKeyboardCandidate * currentCandidate;
@property(retain) TIDocumentState * documentState;
@property BOOL hardwareKeyboardMode;
@property(copy) NSString * inputForMarkedText;
@property(copy) NSString * inputMode;
@property(retain) TIKeyboardLayout * keyLayout;
@property BOOL keyboardEventsLagging;
@property unsigned int keyboardType;
@property(copy) TIKeyboardLayoutState * layoutState;
@property BOOL needsCandidateMetadata;
@property(copy) NSString * recipientIdentifier;
@property(copy) NSString * responseContext;
@property(copy) NSString * searchStringForMarkedText;
@property BOOL secureTextEntry;
@property int shiftState;
@property BOOL shortcutConversionEnabled;
@property BOOL shouldSkipCandidateSelection;
@property BOOL splitKeyboardMode;
@property BOOL suppressingCandidateSelection;
@property(retain) TITextInputTraits * textInputTraits;
@property BOOL userSelectedCurrentCandidate;
@property BOOL wordLearningEnabled;

+ (BOOL)supportsSecureCoding;

- (void)_createTextInputTraitsIfNecessary;
- (BOOL)autocapitalizationEnabled;
- (unsigned int)autocapitalizationType;
- (BOOL)autocorrectionEnabled;
- (BOOL)autocorrectionListUIAutoDisplayMode;
- (BOOL)autocorrectionListUIDisplayed;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentCandidate;
- (void)dealloc;
- (id)description;
- (id)documentState;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hardwareKeyboardMode;
- (id)initWithCoder:(id)arg1;
- (id)inputForMarkedText;
- (id)inputMode;
- (id)keyLayout;
- (BOOL)keyboardEventsLagging;
- (unsigned int)keyboardType;
- (id)layoutState;
- (BOOL)needsCandidateMetadata;
- (id)recipientIdentifier;
- (id)responseContext;
- (id)searchStringForMarkedText;
- (BOOL)secureTextEntry;
- (void)setAutocapitalizationEnabled:(BOOL)arg1;
- (void)setAutocapitalizationType:(unsigned int)arg1;
- (void)setAutocorrectionEnabled:(BOOL)arg1;
- (void)setAutocorrectionListUIAutoDisplayMode:(BOOL)arg1;
- (void)setAutocorrectionListUIDisplayed:(BOOL)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setCurrentCandidate:(id)arg1;
- (void)setDocumentState:(id)arg1;
- (void)setHardwareKeyboardMode:(BOOL)arg1;
- (void)setInputForMarkedText:(id)arg1;
- (void)setInputMode:(id)arg1;
- (void)setKeyLayout:(id)arg1;
- (void)setKeyboardEventsLagging:(BOOL)arg1;
- (void)setKeyboardType:(unsigned int)arg1;
- (void)setLayoutState:(id)arg1;
- (void)setNeedsCandidateMetadata:(BOOL)arg1;
- (void)setRecipientIdentifier:(id)arg1;
- (void)setResponseContext:(id)arg1;
- (void)setSearchStringForMarkedText:(id)arg1;
- (void)setSecureTextEntry:(BOOL)arg1;
- (void)setShiftState:(int)arg1;
- (void)setShortcutConversionEnabled:(BOOL)arg1;
- (void)setShouldSkipCandidateSelection:(BOOL)arg1;
- (void)setSplitKeyboardMode:(BOOL)arg1;
- (void)setSuppressingCandidateSelection:(BOOL)arg1;
- (void)setTextInputTraits:(id)arg1;
- (void)setUserSelectedCurrentCandidate:(BOOL)arg1;
- (void)setWordLearningEnabled:(BOOL)arg1;
- (int)shiftState;
- (BOOL)shortcutConversionEnabled;
- (BOOL)shouldSkipCandidateSelection;
- (BOOL)splitKeyboardMode;
- (BOOL)suppressingCandidateSelection;
- (id)textInputTraits;
- (BOOL)userSelectedCurrentCandidate;
- (BOOL)wordLearningEnabled;

@end