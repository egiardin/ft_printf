/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiardin <egiardin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:17:39 by egiardin          #+#    #+#             */
/*   Updated: 2025/02/08 15:15:43 by egiardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_printchar(int c);
int		ft_formats(va_list args, const char format);
int		ft_printf(const char *str, ...);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_printpercent(void);
int		ft_hex_len(unsigned int num);
int		ft_print_hex(unsigned int num, const char format);
int		ft_ptr_len(uintptr_t num);
int		ft_print_ptr(unsigned long long ptr);
int		ft_num_len(unsigned int num);
int		ft_print_unsigned(unsigned int n);
int		ft_count(int n);
char	*ft_itoa(int nbr);
void	ft_putstr(char *str);
void	ft_put_hex(unsigned int num, const char format);
void	ft_put_ptr(uintptr_t num);
char	*ft_uitoa(unsigned int n);
void	ft_putchar_fd(char c, int fd);

#endif
