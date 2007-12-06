#import "SGSoundUtil.h"

@implementation SGSoundUtil

+ (NSArray *) systemSounds
{
    NSMutableArray *paths = [[NSMutableArray arrayWithCapacity:0] retain];
    
    NSArray *dirs = NSSearchPathForDirectoriesInDomains (NSLibraryDirectory,
                                                         NSAllDomainsMask, YES);
                                                             
    for (unsigned i = 0; i < [dirs count]; i ++)
    {
        NSString *lib_name = (NSString *) [dirs objectAtIndex:i];
        NSString *dir_name = [NSString stringWithFormat:@"%@/Sounds", lib_name];
        NSArray *files = [[NSFileManager defaultManager] directoryContentsAtPath:dir_name];
        
        for (unsigned j = 0; j < [files count]; j ++)
        {
            NSString *file = (NSString *) [files objectAtIndex:j];
            NSString *s = [dir_name stringByAppendingFormat:@"/%@", file];
            [paths addObject:s];
        }
    }

    return paths;
}

@end