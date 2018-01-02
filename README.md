# oe-planck
Over-engineered Planck keyboard layout.

## Main (Dvorak)  
This a standard Planck Dvorak with 5 additional symbol. 
Those five symbols are frequently used in C-based languages. 
There is a data analysis behind it done on React (R), Spring.Net (S), git (G), and scipy (P) code bases.
```
   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31
R  ~  ^  #  %  $  @  ?  \  &  !  |  +  `  ]  [  "  -  *  <  _  >  :  /  }  {  =  ;  ,  .  (  )  ' 
P  $  ?  ~  @  ;  &  |  !  ^  <  %  }  {  \  /  +  #  >  *  `  "  '  ]  [  :  =  -  _  (  )  .  , 
S  ^  `  %  ~  $  @  \  ?  |  &  !  +  '  _  :  #  ]  [  -  *  }  {  ,  =  ;  <  >  "  )  (  .  / 
G  $  @  ~  ^  `  ?  \  #  <  %  :  |  ]  [  !  +  '  /  }  {  &  .  >  "  =  -  *  ,  ;  (  )  _ 
```
In the table above symbols are sorted from lowest to highest frequency of use in the corresponding code base.  

```
,-----------------------------------------------------------------------------------.
|   {  |   '  |   ,  |   .  |   P  |   Y  |   F  |   G  |   C  |   R  |   L  |  -   |
|------+------+------+------+------+-------------+------+------+------+------+------|
|   (  |   A  |   O  |   E  |   U  |   I  |   D  |   H  |   T  |   N  |   S  |  /   |
|------+------+------+------+------+------|------+------+------+------+------+------|
|   [  |   ;  |   Q  |   J  |   K  |   X  |   B  |   M  |   W  |   V  |   Z  |  =   |
|------+------+------+------+------+------+------+------+------+------+------+------|
| Ctrl | Shft |  OS  | Esc  |  Del |  Sp  | Bksp | Entr | Tab  | Alt  |  BL  | QD   |
`-----------------------------------------------------------------------------------'
```

## Qwerty 
Non-alphas are optimized for Ukrainian. Second symbol is for Ukrainian layout. 
```
,-----------------------------------------------------------------------------------.
| ] Ї  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | [ Х  |
|------+------+------+------+------+-------------+------+------+------+------+------|
|   -  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  | ' Є  |
|------+------+------+------+------+------|------+------+------+------+------+------|
| & ?  |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  | \ Ґ  |
|------+------+------+------+------+------+------+------+------+------+------+------|
| Ctrl | Shft |  OS  | Esc  |  Del |  Sp  | Bksp | Entr | Tab  | Alt  |  BL  | QD   |
`-----------------------------------------------------------------------------------'
```

## Symbols and numbers (Dvorak based)
Symbols that are missing for Ukrainian qwerty are placed for index finger.
For non-alphas in the primary layout, symbol switch works as `Shift`. 
Except for the brackets, parens, and curlies, which 
are "mirrored". 

In total there are 32 symbols: 
```
' & | { ` } _ @ 
; . ] + : # ? \ 
* = % > ^ [ ) - 
~ $ ( < / " ! ,
```
Out of them 10 are present on the base layout:
```
' . , ; / 
= - [ { (
```
Thus, we have 22 symbols to accomodate on the symbol layer. 
Out of these 22, however, 10 are bound by the "Shift rule". Positions of 
```
" > < : ?
+ _ } ] ) 
```
are set. Note that we break "Shift rule" for parens, brackets, and curlies. We have just 12 symbols left:
```
!, &, ~, |, $, ^, #, `, \, *, @, %
```
And 26 kyes are still available. 10 can be used for digits. 
Separate number layer used by so many Planck practitioners is completely unnecessary. 
Even with digits, we are going to have `26-10-12=4` keys left. Arrow keys is the obvious choice. 
Symbols 
```
$, ^, &
```
must be accessible easily since they are required for Ukrainian. Let's put them on the top row, 
above corresponding (in regular US layout) numbers. This gives us placement of `$, %, ^, &, *`.
We have just 7 symbols left: `~, |, #, @, `, \, !`.
```
,-----------------------------------------------------------------------------------.
|   }  |   "  |   <  |   >  |   $  |  %   |   1  |   2  |   3  |  4   |   5  |  _   |
|------+------+------+------+------+-------------+------+------+------+------+------|
|   )  |   @  |   &  |   *  |   #  |   ^  |   L  |   D  |   U  |   R  |   \  |  ?   |
|------+------+------+------+------+------+------+------+------+------+------+------|
|   ]  |   :  |   ~  |  `   |   !  |  |   |  6   |   7  |  8   |  9   |  0   |  +   |
|------+------+------+------+------+------+------+------+------+------+------+------|
| Ctrl | Shft |  OS  | Esc  |  Del |  Sp  | Bksp | Entr | Tab  | Alt  |  BL  | QD   |
`-----------------------------------------------------------------------------------'
 ```
Digits should not be in the central row: most of them have lower frequencies of use (as compared to symbols).
We can try a radical layout where number are in the first and the third row. 
This puts arrow keys in the standard Vim position.

It makes more sense, however, to use a dedicated navigation layer, where we would be 
able to add not only arrows, but actions, which are used with them: selection, cut/copy/paste, etc. 
So the final layout will be:
```
,-----------------------------------------------------------------------------------.
|   }  |   "  |   <  |   >  |   $  |  %   |   1  |   2  |   3  |  4   |   5  |  _   |
|------+------+------+------+------+-------------+------+------+------+------+------|
|   )  |   @  |   &  |   *  |   #  |   ^  |   6  |   7  |   8  |   9  |   0  |  ?   |
|------+------+------+------+------+------+------+------+------+------+------+------|
|   ]  |   :  |      |      |   !  |  |   |  `   |   ~  |      |      |  \   |  +   |
|------+------+------+------+------+------+------+------+------+------+------+------|
| Ctrl | Shft |  OS  | Esc  |  Del |  Sp  | Bksp | Entr | Tab  | Alt  |  BL  | QD   |
`-----------------------------------------------------------------------------------'
 ```
For empty keys can be used for key combinations: `+=`, `-=`, `/**/`, `//`, etc.

## Symbol layer for Qwerty
Following similar reasoning we have this basic layout for qwerty symbols:

```
,-----------------------------------------------------------------------------------.
|   }  |   )  |  =   |   (  |   $  |   %  |   1  |   2  |   3  |   4  |   5  |  {   |
|------+------+------+------+------+-------------+------+------+------+------+------|
|   _  |   @  |   &  |   *  |   #  |   ^  |   6  |   7  |   8  |   9  |   0  |  "   |
|------+------+------+------+------+------|------+------+------+------+------+------|
|   +  |   :  |      |      |   !  |  |   |   `  |   ~  |   <  |   >  |   ?  |  |   |
|------+------+------+------+------+------+------+------+------+------+------+------|
| Ctrl | Shft |  OS  | Esc  |  Del |  Sp  | Bksp | Entr | Tab  | Alt  |  BL  | QD   |
`-----------------------------------------------------------------------------------'
```


## Navigation and functional layer
```
,-----------------------------------------------------------------------------------.
|  F1  |  F2  | F3   |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
|------+------+------+------+------+-------------+------+------+------+------+------|
|   )  |   ^  |   &  |   *  |   #  | Home |   L  |   D  |   U  |   R  | End  |  PU  |
|------+------+------+------+------+------+------+------+------+------+------+------|
|   ]  | Cut  | Copy |Paste |   !  |  SH  |  SL  |   SD |  SU  |  SR  |  SE  |  PD  |
|------+------+------+------+------+------+------+------+------+------+------+------|
| Ctrl | Shft |  OS  | Esc  |  Del |  Sp  | Bksp | Entr | Tab  | Alt  |  BL  |  QD  |
`-----------------------------------------------------------------------------------'
 ```
Here `SH` mean `Shift+Home`. Etc. We have 7 keys left for macros. They are here for text selection.

## Modifier keys. 
Bottom row `Ctrl` and `Shift` are meant to be used only occasionally. Planck's firmware allows for dual function keys. 
We use this option to simplify switching between different layers. In the layout below 
```
A = alt
S = shift
C = ctrl
SC = shift+ctrl
SA = shift+alt
CA = ctrl+alt
SCA = ctrl+alt+shift
D = Switching to non-alpha layer
N = Switching to navigation layer
QD = Persistent switching between Qwerty and Dvorak.
```
All keys must be held to activate the function. They are also available in all layers and from both left and right 
halfs of the keyboard. In addition, modifiers are spread out in such a way as to allow for 4-finger chords. Specifically 
one hand can hold up to 3 modifier keys (only 2 are really necessary), which another hand presses a last character which 
that activates the shortcut. `SC` key, since it's used heavily in Visual Studio code and placed under the index finger. 
```
,-----------------------------------------------------------------------------------.
|  SA  |      |      |      |      |  SCA |  SCA |      |      |      |      |  SA  |
|------+------+------+------+------+------+------+------+------+------+------+------|
|   C  |   A  |   N  |  D   |  CS  |  CA  |  CA  | CS   |  D   |  N   |  A   |  C   |
|------+------+------+------+------+------+------+------+------+------+------+------|
|   S  |      |      |      |      |      |      |      |      |      |      |  S   |
|------+------+------+------+------+------+------+------+------+------+------+------|
| Ctrl | Shft |  OS  | Esc  |  Del |  Sp  | Bksp | Entr | Tab  | Alt  |  BL  |  QD  |
`-----------------------------------------------------------------------------------'
```