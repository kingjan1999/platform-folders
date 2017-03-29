# platform-folders
Node.js bindings for [sago007/PlatformFolders](https://github.com/sago007/PlatformFolders)

This library is inspired by Electrons [app.getPath](https://github.com/electron/electron/blob/master/docs/api/app.md#appgetpathname) used for getting so called "special directories".
These directories, like "Documents", "Downloads" and "AppData" are platform dependent. This Node Native Addon uses a C++ libary (linked above) to resolve the paths on Windows, "Linux" and Mac OS X.

## Usage
You can either use the "Electron-Style" by calling the default export:
```javascript
import getPath from 'platform-folders';
console.log(getPath('downloads'));
```
Following names are supported:
- `home` Home folder (e.g. `/home/<Username>`, `c:\Users\<Username>`, `/Users/<Username>`)
- `appData` Per-User Application Directory (e.g. `/home/<Username>/.local/share`, `c:\Users\<Username>\Application Data`, `/Users/<Username>/Library/Application Support`)
- `userData` Directory for storing config files (e.g. `/home/<Username>/.config`, `c:\Users\<Username>\Application Data`, `/Users/<Username>/Library/Application Support`)
- `desktop` Desktop directory (e.g. `/home/<Username>/Schreibtisch` (on a German system), `c:\Users\<Username>\Desktop`, `/Users/<Username>/Desktop`)
