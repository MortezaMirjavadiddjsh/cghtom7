#ifndef _UTILS_H_
#define _UTILS_H_

void s_sleep(unsigned int s, unsigned int u);

// is_valid_ip_address:
// return 0:ipaddress unlegal
int is_valid_ip_address(const char *ip_address);
int show_net_ifname();
int get_net_ifname(char *if_buf, int blen);

#endif //_UTILS_H_
