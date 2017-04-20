//
//  Product.h
//  NavCtrl
//
//  Created by Maxwell Schneider on 3/28/17.
//  Copyright © 2017 Aditya Narayan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Product : NSObject

@property (nonatomic, retain) NSString *productName;
@property (nonatomic, retain) NSString *productURL;
@property (nonatomic, retain) UIImage *productImage;
@property (nonatomic, retain) NSString *productImageString;

-(instancetype)initWithProductName: (NSString*)productNameInput
                     andProductURL: (NSString*)productURLInput
                   andProductImage: (NSString*)imageInput;


- (instancetype)initWithProductName: (NSString*)productName
                       downloadLogo: (UIImage*)productLogo;





@end
