/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcanadas <fcanadas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 14:03:49 by fcanadas          #+#    #+#             */
/*   Updated: 2020/10/16 19:36:41 by fcanadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_atoi (char *str);
void				ft_bzero (void *str, int toers);
void				*ft_calloc(int nmemb, int size);
int					ft_isalnum (int a);
int					ft_isalpha (int a);
int					ft_isascii (int a);
int					ft_isdigit (int a);
int					ft_isprint (int a);
char				*ft_itoa(int n);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **alst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));
t_list				*ft_lstnew(void *content);
int					ft_lstsize(t_list *lst);
void				*ft_memccpy(void *dest, void *src, int c, int n);
void				*ft_memchr(void *src, int c, int n);
int					ft_memcmp(void *s1, void *s2, int n);
void				*ft_memcpy(void *dest, void *src, int n);
void				*ft_memmove(void *dest, void *src, int n);
void				*ft_memset(void *ptr, int fill, int len);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char *s, int fd);
char				**ft_split(char const *s, char c);
char				*ft_strchr(char *str, char c);
char				*ft_strdup(char *src);
char				*ft_strjoin(char const *s1, char const *s2);
int					ft_strlcat(char *dst, const char *src, int size);
int					ft_strlcpy(char *dst, const char *src, int size);
size_t				ft_strlen(const char *s);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strncmp(char *s1, char *s2, int n);
char				*ft_strnstr (char *big, char *little, int len);
char				*ft_strrchr(char *str, char c);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(char const *s, unsigned int start, size_t len);
int					ft_tolower (int a);
int					ft_toupper (int a);

#endif
