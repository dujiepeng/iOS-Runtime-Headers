/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSLock;

@interface CoreDAVXMLData : NSObject {
    struct _xmlDoc { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; NSInteger x10; NSInteger x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; NSInteger x20; struct _xmlDict {} *x21; void *x22; NSInteger x23; NSInteger x24; } *_doc;
    BOOL _docHasEnded;
    struct __CFArray { } *_elementStack;
    NSLock *_namespaceLock;
    struct __CFDictionary { } *_seenURIsToDepth;
    struct __CFDictionary { } *_seenURIsToPrefixes;
    BOOL _shouldAddFormattingSpaces;
    struct _xmlTextWriter { } *_writer;
}

@property(readonly) NSData *data;
@property BOOL shouldAddFormattingSpaces;

- (const char *)_prefixForNameSpace:(const char *)arg1;
- (void)_startElement:(const char *)arg1 inNamespace:(const char *)arg2 withAttributeNamesAndValues:(const char *)arg3 attributes:(void*)arg4;
- (void)appendElement:(const char *)arg1 inNamespace:(const char *)arg2 withStringContent:(id)arg3 withAttributeNamesAndValues:(const char *)arg4;
- (id)data;
- (void)dealloc;
- (void)endElement:(const char *)arg1 inNamespace:(const char *)arg2;
- (id)init;
- (void)setShouldAddFormattingSpaces:(BOOL)arg1;
- (BOOL)shouldAddFormattingSpaces;
- (void)startElement:(const char *)arg1 inNamespace:(const char *)arg2 withAttributeNamesAndValues:(const char *)arg3;

@end