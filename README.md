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
- `appData` Per-User Application Directory (e.g. `/home/<Username>/.local/share`, `c:\Users\<Username>\AppData\Roaming`, `/Users/<Username>/Library/Application Support`)
- `userData` Directory for storing config files (e.g. `/home/<Username>/.config`, `c:\Users\<Username>\AppData\Roaming`, `/Users/<Username>/Library/Application Support`)
- `desktop` Desktop directory (e.g. `/home/<Username>/Schreibtisch` (on a German system), `c:\Users\<Username>\Desktop`, `/Users/<Username>/Desktop`)
- `documents` Documents directory (e.g. `/home/<Username>/Dokumente` (on a German system), `c:\Users\<Username>\Documents`, `/Users/<Username>/Documents`)
- `Downloads` Downloads directory (e.g. `/home/<Username>/Downloads`, `c:\Users\<Username>\Downloads`, `/Users/<Username>/Downloads`)
- `music` Music directory (e.g. `/home/<Username>/Musik` (on a German system), `c:\Users\<Username>\Music`, `/Users/<Username>/Music`)
- `pictures` Pictures directory (e.g. `/home/<Username>/Bilder` (on a German system), `c:\Users\<Username>\Pictures`, `/Users/<Username>/Pictures`)
- `videos` Videos directory (e.g. `/home/<Username>/Videos`, `c:\Users\<Username>\Videos`, `/Users/<Username>/Videos`)
- `cache` Cache directory (e.g. `/home/<Username>/.cache`, `c:\Users\<Username>\AppData\Local`, `/Users/<Username>/Library/Caches`)
- `savegames` Directory for savegames (e.g. `/home/<Username>/.local/share`, `c:\Users\<Username>\SavedGames`, `/Users/<Username>/Library/Application Support`)

Alternatively you can use the named exports:
```javascript
import {getDownloadsFolder} from 'platform-folders';
console.log(getDownloadsFolder());
```

| Key       | Method             |
|-----------| -------------------|
|`home`     |getHomeFolder()     |
|`appData`  |getDataHome()       |
|`userData` |getConfigHome()     |
|`desktop`  |getDesktopFolder()  |
|`documents`|getDocumentsFolder()|
|`downloads`|getDownloadsFolder()|
|`music`    |getMusicFolder()    |
|`pictures` |getPicturesFolder() |
|`videos`   |getVideosFolder()   |
|`cache`    |getCacheFolder()    |
|`savegames`|getSaveGamesFolder()|