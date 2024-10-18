#ifndef __C_RESTRICT_H
#define __C_RESTRICT_H

#if (defined(__GNUC__) && (defined(__cplusplus) || __STDC_VERSION__ < 199901L)) || \
	(defined (_MSC_VER) && defined(__cplusplus))
#define restrict __restrict
#endif

#endif
