#if 0
	shc Version 3.8.7, Generic Script Compiler
	Copyright (c) 1994-2009 Francisco Rosales <frosal@fi.upm.es>

	shc -v -r -T -f ./u4.sh 
#endif

static  char data [] = 
#define      tst2_z	19
#define      tst2	((&data[0]))
	"\124\367\275\224\107\212\112\030\261\136\057\242\040\100\101\252"
	"\211\170\311\120"
#define      shll_z	10
#define      shll	((&data[20]))
	"\105\042\224\104\164\206\264\377\102\170"
#define      rlax_z	1
#define      rlax	((&data[30]))
	"\203"
#define      inlo_z	3
#define      inlo	((&data[31]))
	"\172\270\375"
#define      opts_z	1
#define      opts	((&data[34]))
	"\157"
#define      text_z	998
#define      text	((&data[41]))
	"\070\045\220\037\063\256\057\333\144\155\231\013\022\322\377\240"
	"\062\252\276\143\026\120\007\102\110\111\365\113\072\122\301\077"
	"\065\006\252\336\045\004\123\363\133\064\375\331\141\355\113\176"
	"\153\146\151\026\227\356\303\172\054\266\246\141\165\127\111\026"
	"\037\113\057\121\073\044\340\156\367\300\134\210\227\360\372\237"
	"\230\122\101\156\276\141\234\243\141\104\343\141\325\221\363\012"
	"\005\243\226\131\375\301\345\310\263\134\032\357\020\316\031\327"
	"\206\330\375\102\052\316\321\155\203\340\177\050\307\222\301\132"
	"\352\223\272\051\023\351\376\044\376\013\270\251\310\227\350\171"
	"\143\331\220\067\313\230\352\005\001\302\032\346\326\254\367\231"
	"\063\352\375\151\160\246\013\016\363\067\263\364\201\003\231\005"
	"\117\134\111\262\146\042\356\051\132\237\105\345\163\067\115\170"
	"\125\325\254\012\014\072\265\344\041\310\357\052\157\216\117\343"
	"\322\160\200\143\357\046\357\346\005\261\110\046\214\072\274\334"
	"\245\313\163\267\332\065\057\117\173\245\156\315\276\070\117\074"
	"\015\340\262\174\341\377\103\260\357\223\043\201\106\154\372\104"
	"\365\226\055\000\211\356\364\164\270\253\133\175\173\352\343\177"
	"\317\004\021\144\307\164\012\241\165\215\263\206\101\061\253\143"
	"\105\134\006\061\226\341\302\017\064\064\305\114\154\357\326\037"
	"\106\334\041\056\175\104\120\046\235\051\117\231\003\032\253\041"
	"\152\161\110\261\053\015\164\004\065\100\037\174\155\041\136\252"
	"\277\145\132\340\205\026\054\224\161\167\057\333\320\022\064\370"
	"\077\200\216\205\345\025\015\311\171\224\242\102\232\130\242\041"
	"\223\302\270\140\021\246\123\376\054\135\066\063\022\122\344\214"
	"\300\004\332\142\310\225\247\020\011\164\346\153\155\016\330\276"
	"\212\177\371\315\043\360\003\147\233\321\301\164\352\012\031\321"
	"\001\177\164\046\310\350\045\357\074\024\255\271\170\255\126\115"
	"\240\066\245\100\366\126\074\210\233\136\055\254\032\364\210\113"
	"\013\344\140\333\136\147\220\301\026\131\101\275\361\241\263\100"
	"\074\205\167\251\107\375\254\067\163\126\011\166\104\105\264\252"
	"\102\015\341\007\362\116\343\042\154\007\105\144\315\226\026\236"
	"\041\063\241\332\307\013\131\106\366\025\051\163\101\232\227\142"
	"\007\032\046\277\312\376\050\305\014\217\354\355\216\322\307\020"
	"\145\267\037\225\127\206\303\141\012\077\177\100\345\356\172\074"
	"\000\336\232\136\252\047\154\230\210\305\353\050\261\310\003\315"
	"\316\240\062\143\361\127\211\265\073\074\065\252\231\063\313\266"
	"\270\355\062\101\271\001\154\355\131\071\306\030\324\335\047\055"
	"\032\105\154\126\236\346\171\245\007\216\027\353\105\002\124\312"
	"\125\027\331\366\254\030\362\130\307\147\340\250\361\274\221\015"
	"\364\074\021\015\153\026\327\113\314\140\150\051\212\162\045\333"
	"\053\361\333\121\140\326\252\333\365\340\355\031\157\100\121\263"
	"\143\237\355\203\243\012\351\105\047\020\204\312\133\007\037\010"
	"\056\341\223\247\364\172\167\200\012\320\112\223\345\303\340\222"
	"\342\111\121\173\152\022\300\321\262\315\377\223\111\330\340\335"
	"\264\042\321\245\315\373\154\016\065\065\302\047\016\164\316\331"
	"\317\161\053\375\264\064\166\153\275\220\265\363\141\073\121\254"
	"\225\207\252\312\214\024\146\021\147\074\006\137\024\116\044\141"
	"\053\007\216\127\144\102\220\074\306\140\011\077\044\301\057\053"
	"\122\117\277\161\343\254\237\071\065\142\106\373\111\113\307\173"
	"\171\176\004\275\172\130\000\144\371\341\334\114\335\027\060\234"
	"\325\274\236\316\301\126\151\373\131\223\227\255\340\046\234\222"
	"\067\354\021\202\170\001\155\355\311\230\324\153\214\105\054\206"
	"\241\032\027\365\336\021\126\064\366\272\055\165\315\156\346\210"
	"\174\366\232\216\014\043\325\143\173\127\262\332\125\035\053\031"
	"\324\306\143\255\125\334\314\027\204\001\137\126\061\001\245\044"
	"\376\311\372\270\346\061\204\306\210\033\336\216\214\142\150\023"
	"\046\003\067\013\212\025\310\120\140\041\017\304\206\273\101\241"
	"\260\346\032\011\300\232\111\355\176\165\071\053\262\160\241\174"
	"\167\153\256\230\346\104\050\103\315\350\145\023\137\361\210\041"
	"\254\211\174\037\074\110\147\044\134\353\204\202\044\112\336\132"
	"\077\353\024\327\022\370\110\335\311\025\302\150\242\112\105\125"
	"\270\243\244\205\270\007\200\371\161\014\307\154\230\033\255\111"
	"\067\261\027\000\062\042\242\120\200\006\242\352\135\136\035\272"
	"\340\304\233\020\046\353\123\134\354\002\305\373\106\166\207\363"
	"\172\163\276\200\161\367\246\001\026\332\257\164\070\314\057\031"
	"\221\312\051\267\265\175\024\242\177\331\235\306\117\045\272\312"
	"\230\170\112\011\160\361\013\207\313\272\374\004\207\053\035\030"
	"\365\107\317\253\304\344\115\103\276\353\012\016\021\304\330\252"
	"\075\042\264\256\024\277\065\340\171\061\344\001\134\002\031\122"
	"\111\351\376\015\315\113\121\213\067\134\232\111\040\162\363\136"
	"\225\250\014\251\147\101\211\341\163\156\342\320\160\373\042\272"
	"\344\040\310\262\154\032\076\244\166\330\356\226\113\342\365\340"
	"\212\001\212\362\102\023\323\266\202\265\206\363\261\250\255\226"
	"\311\166\111\066\220\207\333\006\140\311\235\253\253\222\214\066"
	"\223\026\050\326\052\373\214\254\261\022\240\143\273\116\371\205"
	"\304\102\274\124\312\227\133\053\141\370\327\015\213\143\103\036"
	"\171\153\365\243\146\201\120\030\224\360\173\117\077\165\325\003"
	"\270\221\130\202\051\263\256\212\253\206\227\066\351\332\125\143"
	"\105\112\007"
#define      chk2_z	19
#define      chk2	((&data[1289]))
	"\305\140\111\357\303\342\146\217\304\017\305\123\274\144\246\330"
	"\241\071\364\032\142\230\100"
#define      pswd_z	256
#define      pswd	((&data[1343]))
	"\206\213\156\027\344\360\101\227\237\313\103\045\143\172\017\075"
	"\317\162\203\032\172\060\346\322\366\107\034\066\370\244\354\176"
	"\060\132\244\202\311\345\163\033\302\230\037\205\151\063\353\232"
	"\035\062\325\020\007\272\003\127\135\252\017\217\202\314\124\216"
	"\325\370\020\237\336\203\273\240\034\333\046\206\016\021\041\054"
	"\103\366\074\113\260\100\243\016\353\262\236\155\177\362\374\125"
	"\353\015\364\312\221\257\153\256\212\221\065\231\243\126\306\347"
	"\114\003\062\375\103\326\014\057\211\253\235\011\236\231\136\212"
	"\247\123\125\071\003\300\347\216\122\034\050\365\163\356\334\277"
	"\361\017\275\065\345\312\144\157\166\001\170\024\233\326\237\103"
	"\052\364\174\055\265\143\273\007\200\343\375\363\322\331\263\303"
	"\350\161\371\316\073\135\076\261\137\266\306\373\215\146\076\267"
	"\132\272\345\017\036\240\027\237\204\024\223\126\355\106\032\326"
	"\267\023\245\363\161\343\245\321\232\154\314\050\322\013\340\055"
	"\306\305\074\345\146\123\204\353\150\027\101\125\136\134\054\026"
	"\160\321\012\341\265\257\263\120\034\177\170\356\213\130\033\121"
	"\035\130\067\204\254\273\157\024\323\261\152\062\015\226\110\175"
	"\150\122\137\035\002\022\155\037\222\346\016\035\076\052\157\134"
	"\202\246\226\024\113\327\253\353\243\357\020\006\151\040\104\070"
	"\223\310\123\015\371\072\340\357\201\374\046\171\240\023\367\321"
	"\156\215\345\272\145\221\245\010\200\266\016\352\326\122\043\151"
#define      msg1_z	42
#define      msg1	((&data[1650]))
	"\024\260\127\003\062\150\362\021\065\064\154\350\325\136\042\212"
	"\033\076\371\152\144\207\337\071\226\222\350\354\055\153\203\111"
	"\053\031\070\037\137\140\365\331\324\221\166\005\345\350\127\123"
	"\051\253\364\074"
#define      msg2_z	19
#define      msg2	((&data[1700]))
	"\061\253\144\010\233\264\356\202\243\303\123\300\233\072\251\064"
	"\370\155\315\121\165\307\226\075\012"
#define      date_z	1
#define      date	((&data[1722]))
	"\132"
#define      xecc_z	15
#define      xecc	((&data[1725]))
	"\000\314\176\364\121\011\014\205\232\226\247\167\204\064\137\212"
	"\345\001\033"
#define      lsto_z	1
#define      lsto	((&data[1742]))
	"\330"
#define      tst1_z	22
#define      tst1	((&data[1747]))
	"\045\044\134\320\231\111\046\020\367\322\131\230\276\156\102\025"
	"\352\055\336\341\225\070\270\377\076\057\030"
#define      chk1_z	22
#define      chk1	((&data[1772]))
	"\103\245\347\160\327\211\214\076\250\106\132\212\371\105\222\373"
	"\130\353\172\313\075\027\351\346\212\250\074\310\262"/* End of data[] */;
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
