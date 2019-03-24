PPEE (puppy) 1.12
--------------------------
This is a professional PE file explorer that lets you dig into all data directories available in the PE/PE64 file and edit them.
Export, Import, Resource, Exception, Certificate(Relies on Windows API), Base Relocation, Debug, TLS, Load Config, Bound Import, IAT, Delay Import, CLR(.Net) and Rich are supported.
Two companion plugins are also provided. FileInfo, to query the file in the well-known malware repositories and take one-click technical information about the file such as its size, entropy, attributes, hashes, version info and so on. YaraPlugin, to test Yara rules against opened file.

Puppy is robust against malformed and crafted PE files which makes it handy for reversers, malware researchers and those who want to inspect PE files in more details.

Puppy is free and tries to be small, fast, nimble and friendly as your puppy!


Changelog
---------------
>> 2018-08-17 Released Version 1.12 <<
- Rich Header supported (Experimental)
- Resolve ordinal to name in imported APIs
- File description of imported modules is shown
- Filter/Search box added for listview
- PE type icon added in statusbar
- .ini file converted to UTF
- SHA256 and ImpHash added in FileInfo plugin
- Bugfixes

>> 2018-04-06 Released Version 1.11 <<
- Remeber window size and position
- Added Authentihash(PE256) in FileInfo plugin 
- Shell integration support added for dll, cpl and ocx files
- Autocheck for new version at program start up
- Bugfixes

>> 2017-10-10 Released Version 1.10 <<
- Fixed bug in parsing Manifest resource
- Fixed bug in parsing non PE files
- Improved Metadefender compatibility in FileInfo plugin 
- Fixed listview item select in Wine
- Improved edit capability

>> 2017-06-27 Released Version 1.09 <<
- Yara rules supported(New plugin)
- Application manifest item added to Treeview
- Resource type detection added
- Treeview tooltips added
- Rearrange Debug Dir. items
- Show file size in binary unit(FileInfo plugin)
- Major Bugfixes

>> 2017-03-29 Released Version 1.08 <<
- Plugin revised (Get query report through system proxy)
- Horizontal divider added
- GUI is improved
- Major bug fixes

>> 2016-09-10 Released Version 1.07 <<
- Virustotal and OPSWAT's Metadefender query report is added to the plugin (Without submitting the file)
- Suspicious strings treeview item added (Customizable via Suspicious.txt file)
- Timedate stamp now shown in UTC standard, with days passed
- Statusbar shows basic PE info
- Minor bug fixes

>> 2016-07-08 Released Version 1.06 <<
- GUI is improved
- Anomaly detection added
- Check update menu item added
- Toolbar and Statusbar Added
- Added RightClick context menu to copy or search
- Dump Sections, Resources and .Net assembly directories
- Separated items for URL, Registry, File strings
- Minor bugs in .Net directory fixed
- Fuzzy hash(ssdeep) support by plugin

>> 2016-04-22 Released Version 1.05 <<
- .Net assembly VtableFixup support
- Control Flow Guard support
- New highlighting scheme
- Treeview icon added
- Neater Listview
- Major bug fixes

>> 2015-07-19 Released Version 1.04 <<
- Descriptive information is added (Plus sign means, it is not a member of the structure)
- Full Resource directory support
- Companion plugin revised
- Some minor bug fixes

>> 2015-05-02 Released Version 1.03 <<
- Entropy and MD5 of the sections are added
- GUI is improved
- Companion plugin revised (File entropy and CRC32)
- Some major bug fixes

>> 2012-09-28 Released Version 1.02 <<
Now puppy can bite! It means puppy is gonna become a PE editor.

- You are allowed to edit most of the data directory structures
- Plugin enabled (For more information refer to Plugins.txt)
- A very simple built in hex editor is supplied(A little buggy)
- "Strings in file" item is added to tree view which can show ASCII/UNICODE strings in a PE.
- List view columns can sort data in an appropriate way
- Refresh, Save and Save as menu commands added
- Some major bug fixes

>> 2012-08-05 Released Version 1.01 <<
- Tree view accepts single click
- Main window is now resizable
- List view is colorized
- Some minor bug fixes


Greetings
--------------
kao, _genuine, __philippe, x9p, Alex V, VOLKOFF, Peter Steiner, Sebastian Hartte, Lord Noteworthy, Jimakoch Jui, bao7uo, Rajesh Nikam (for their suggestions and bugreports)


Contact
------------
For any comments, bugreports, suggestions e-mail me: info `at' mzrst `dot' com