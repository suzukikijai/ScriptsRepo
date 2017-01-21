#if 0
	shc Version 3.8.7, Generic Script Compiler
	Copyright (c) 1994-2009 Francisco Rosales <frosal@fi.upm.es>

	shc -v -r -T -f autoloaderList.sh 
#endif

static  char data [] = 
#define      inlo_z	3
#define      inlo	((&data[0]))
	"\326\214\125"
#define      chk1_z	22
#define      chk1	((&data[5]))
	"\131\216\160\202\034\062\214\230\253\377\024\370\032\225\064\242"
	"\240\066\246\053\015\057\142\130"
#define      tst1_z	22
#define      tst1	((&data[29]))
	"\207\110\222\152\253\017\235\367\256\214\054\221\137\162\343\160"
	"\137\376\256\073\304\312\327\020\161"
#define      lsto_z	1
#define      lsto	((&data[52]))
	"\145"
#define      shll_z	10
#define      shll	((&data[53]))
	"\261\052\066\302\253\057\312\101\205\243"
#define      msg1_z	42
#define      msg1	((&data[65]))
	"\337\261\026\043\355\332\256\014\246\316\236\276\161\324\000\211"
	"\063\011\331\013\206\124\311\126\255\230\315\135\040\376\014\160"
	"\127\072\016\230\354\272\040\150\215\351\326\270\205\110\121\134"
	"\366\041\244\230\306\065"
#define      chk2_z	19
#define      chk2	((&data[121]))
	"\201\124\010\325\100\206\273\037\363\133\307\063\046\014\267\041"
	"\127\267\325\362\132\343\242\333\120"
#define      xecc_z	15
#define      xecc	((&data[143]))
	"\266\035\227\305\113\177\215\100\321\367\102\246\037\114\001\064"
	"\217"
#define      rlax_z	1
#define      rlax	((&data[159]))
	"\252"
#define      tst2_z	19
#define      tst2	((&data[163]))
	"\233\106\330\102\247\162\032\207\357\304\027\125\344\215\006\307"
	"\206\352\055\211\337\341\354\243"
#define      text_z	602
#define      text	((&data[192]))
	"\146\324\175\131\257\014\332\003\271\303\154\374\331\317\042\104"
	"\325\360\225\311\303\004\143\063\373\247\005\350\134\210\003\077"
	"\362\125\121\276\152\164\002\242\217\037\243\373\275\353\121\341"
	"\160\061\066\230\114\252\117\250\331\350\113\155\046\201\256\151"
	"\343\364\151\324\313\103\155\344\270\005\163\312\177\235\073\210"
	"\114\043\223\210\163\230\131\126\151\022\263\227\130\227\237\374"
	"\150\310\046\121\261\211\261\202\025\361\373\054\276\237\273\167"
	"\212\111\334\020\056\077\106\250\362\173\211\250\366\250\142\304"
	"\370\127\140\350\272\227\000\131\224\127\077\126\146\114\043\030"
	"\374\242\055\062\361\013\270\124\264\054\046\213\120\373\160\345"
	"\213\351\336\063\053\115\313\164\356\175\371\323\134\061\270\264"
	"\126\025\221\342\250\144\174\201\166\023\343\041\234\300\026\263"
	"\045\063\142\054\301\154\335\312\236\004\224\210\177\300\360\150"
	"\364\251\376\221\023\327\337\014\170\221\334\276\256\065\060\005"
	"\315\254\251\303\361\141\160\370\177\065\353\117\253\133\331\225"
	"\014\231\356\056\057\300\070\220\231\137\255\223\042\000\044\030"
	"\030\067\005\124\044\114\322\363\172\010\345\133\150\243\113\236"
	"\215\050\113\254\350\030\007\163\374\125\126\116\267\204\015\040"
	"\145\374\033\342\021\371\045\050\354\055\101\327\366\155\375\176"
	"\354\054\316\253\071\361\133\044\241\350\162\144\062\221\227\251"
	"\364\250\247\241\061\061\316\144\212\071\173\261\126\251\157\050"
	"\061\250\172\005\342\013\241\253\243\120\305\244\061\045\316\065"
	"\171\204\357\020\235\011\126\211\375\120\070\167\241\073\035\306"
	"\241\277\205\264\021\220\157\216\237\211\017\154\053\365\354\317"
	"\266\040\165\315\031\064\343\216\051\225\200\107\070\203\356\170"
	"\064\305\235\315\262\160\015\222\025\167\011\070\047\270\241\140"
	"\321\363\113\250\167\223\213\224\244\251\066\375\001\037\160\073"
	"\003\126\135\254\300\021\104\015\271\334\113\126\007\102\141\333"
	"\327\342\265\310\266\122\300\247\213\365\173\032\344\112\266\117"
	"\144\350\203\165\177\214\356\132\112\014\330\055\042\010\265\302"
	"\224\074\044\111\160\045\362\354\226\073\203\105\203\227\025\026"
	"\355\266\234\244\366\134\315\331\221\352\217\100\001\366\054\104"
	"\350\041\113\143\315\012\273\344\250\116\315\011\075\344\215\240"
	"\057\167\367\265\150\235\374\175\147\176\247\131\342\250\211\325"
	"\231\013\221\066\351\303\204\134\240\260\366\336\147\274\371\047"
	"\204\071\003\136\312\073\316\313\326\275\363\376\366\175\331\166"
	"\265\220\105\116\300\216\100\076\006\020\277\101\262\334\104\342"
	"\044\251\250\064\311\112\336\342\072\263\374\327\252\237\055\242"
	"\305\115\025\257\336\145\365\054\341\254\274\224\171\153\176\072"
	"\372\031\201\322\006\044\241\024\154\010\351\352\141\230\366\073"
	"\233\014\352\172\161\340\246\123\214\142\350\005"
#define      pswd_z	256
#define      pswd	((&data[862]))
	"\311\177\301\234\206\345\076\232\122\106\204\074\247\034\062\343"
	"\267\076\316\062\260\256\330\004\072\073\354\235\316\067\150\025"
	"\277\233\015\040\101\326\320\211\145\371\274\274\236\037\330\117"
	"\156\161\247\232\202\203\304\244\004\260\101\323\347\251\350\246"
	"\104\365\307\206\314\227\017\062\220\314\356\057\354\307\176\133"
	"\070\046\365\273\251\272\137\256\153\240\201\122\112\151\371\217"
	"\137\300\025\053\130\045\135\350\362\114\030\336\023\227\071\114"
	"\275\057\007\147\352\147\025\125\010\226\250\122\000\241\342\140"
	"\142\370\213\272\036\351\243\020\066\274\356\111\123\050\225\021"
	"\130\235\170\102\004\215\227\014\044\077\137\045\341\101\205\103"
	"\072\021\376\130\373\242\150\061\136\127\173\261\177\021\303\327"
	"\256\073\032\263\311\261\300\356\361\037\024\322\141\232\026\233"
	"\253\024\363\247\266\134\331\025\263\125\306\063\146\212\012\025"
	"\305\045\311\217\326\211\175\307\250\221\231\012\053\260\246\327"
	"\304\231\177\173\365\130\220\251\255\127\334\024\341\346\051\247"
	"\013\362\066\342\173\264\252\044\105\103\057\161\363\325\110\270"
	"\157\307\064\145\040\305\016\316\035\352\342\377\321\014\246\335"
	"\377\335\277\173\221\151\240\327\255\317\354\100\012\123\200\323"
	"\323\101\160\131\047\256\364\171\365\170"
#define      opts_z	1
#define      opts	((&data[1134]))
	"\024"
#define      date_z	1
#define      date	((&data[1135]))
	"\161"
#define      msg2_z	19
#define      msg2	((&data[1137]))
	"\330\157\111\234\313\016\357\134\313\247\006\353\232\376\153\162"
	"\014\256\353\203\374\127"/* End of data[] */;
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
