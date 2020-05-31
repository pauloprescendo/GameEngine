#include "WorkingDirectory.hpp"

WorkingDirectory::WorkingDirectory()
{
    path = "./";

    // #ifdef __APPLE__
    //     CFBundleRef mainBundle = CFBundleGetMainBundle();
    //     CFURLRef resourcesURL = CFBundleCopyResourcesDirectoryURL();
    //     char path[PATH_MAX];
    //     if (CFURLGetFileSystemRepresentation(resourcesURL, TRUE, (UInt8 *)path, PATH_MAX)) {
    //         CFRelease(resourcesURL);
    //         chdir(path);
    //     }
    // #endif
}
