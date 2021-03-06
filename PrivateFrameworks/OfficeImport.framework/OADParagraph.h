/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADParagraph : NSObject {
    OADCharacterProperties *mParagraphEndCharacterProperties;
    OADParagraphProperties *mProperties;
    NSMutableArray *mTextRuns;
}

- (id)addDateTimeFieldWithFormat:(int)arg1;
- (id)addFooterField;
- (id)addGenericTextFieldWithGuid:(id)arg1 type:(id)arg2;
- (id)addRegularTextRun;
- (id)addSlideNumberField;
- (id)addTextLineBreak;
- (void)applyProperties:(id)arg1;
- (id)bulletCharacterProperties;
- (void)changeParentParagraphPropertiesPreservingEffectiveValues:(id)arg1;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (unsigned int)characterCount;
- (void)dealloc;
- (id)description;
- (id)findFirstTextRunOfClass:(Class)arg1;
- (BOOL)hasBulletCharacterProperties;
- (id)init;
- (BOOL)isEmpty;
- (BOOL)isSimilarToParagraph:(id)arg1;
- (unsigned int)lineBreakCount;
- (id)paragraphEndCharacterProperties;
- (id)plainText;
- (id)properties;
- (void)removeAllTextRuns;
- (void)removeUnnecessaryOverrides;
- (void)setParagraphEndCharacterProperties:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (id)textRunAtIndex:(unsigned int)arg1;
- (unsigned int)textRunCount;

@end
