/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartReferenceLineLabelsLayoutItem : TSCHChartLayoutItem {
    TSCHChartAxisID *mAxisID;
}

@property (nonatomic, readonly, retain) TSCHChartAxisID *axisID;

- (id)axisID;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calcDrawingRect;
- (struct CGSize { float x1; float x2; })calcMinSize;
- (void)dealloc;
- (id)initWithParent:(id)arg1 axisID:(id)arg2;
- (id)p_areaLayoutItem;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_drawingRectForModel:(id)arg1;
- (void)protected_iterateHitChartElements:(struct CGPoint { float x1; float x2; })arg1 withBlock:(id /* block */)arg2;
- (id)subselectionKnobPositionsForSelection:(id)arg1;

@end
