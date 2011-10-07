//
//  XTFileListDataSource.h
//  Xit
//
//  Created by German Laullon on 13/09/11.
//

#import <Foundation/Foundation.h>

@class XTRepository;

@interface XTFileListDataSource : NSObject <NSOutlineViewDataSource>
{
    @private
    XTRepository *repo;
    NSTreeNode *root;
    NSMutableDictionary *nodes;
    NSOutlineView *table;
}

- (void)setRepo:(XTRepository *)repo;
- (void)reload;

@end
