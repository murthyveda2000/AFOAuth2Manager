//
//  AFHTTPSessionManager+OAuth2.h
//  AFOAuth2Manager
//
//  Created by Nathan Racklyeft on 6/29/16.
//  Copyright © 2016 Alamofire. All rights reserved.
//

#import <AFNetworking/AFHTTPSessionManager.h>

NS_ASSUME_NONNULL_BEGIN

@interface AFHTTPSessionManager (OAuth2)

- (NSURLSessionDataTask *)dataTaskWithHTTPMethod:(NSString *)method
                                       URLString:(NSString *)URLString
                                      parameters:(id)parameters
                                  uploadProgress:(nullable void (^)(NSProgress *uploadProgress)) uploadProgress
                                downloadProgress:(nullable void (^)(NSProgress *downloadProgress)) downloadProgress
                                         success:(void (^)(NSURLSessionDataTask *, id))success
                                         failure:(void (^)(NSURLSessionDataTask *, NSError *))failure;

@end

NS_ASSUME_NONNULL_END
