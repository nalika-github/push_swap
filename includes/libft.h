/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:51:40 by ptungbun          #+#    #+#             */
/*   Updated: 2023/02/27 18:27:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

typedef struct s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

typedef struct	s_stack
{
	int			top;
	unsigned	cap;
	int			*array;
}				t_stack;

t_stack				*ft_getstack(unsigned capacity);
void				ft_stackadd(t_stack *stack, int add_data);
int					ft_stackisempty(t_stack *stack);
int					ft_stackisfull(t_stack *stack);
int					ft_stackpeek(t_stack *stack);
int					ft_stackpop(t_stack *stack);

int					ft_issign(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isascii(int c);
int					ft_isalnum(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_lstsize(t_list *lst);

size_t				ft_strlen(const char *str);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);

void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_bzero(void *b, size_t len);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_calloc(size_t nmemb, size_t size);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_striteri(char *s, void (*f)(unsigned int, char*));

char				*ft_strchr(const char *s, int c);
char				*ft_strdup(const char *s);
char				*ft_strrchr(const char *s, int c);
char				*ft_strnstr(const char *str, const char *find, size_t len);
char				*ft_itoa(int n);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strjoin(char const *s1, char const *s2);
char				**ft_split(char const *s, char c);
char				*ft_strcat(char *s1, char *s2);

t_list				*ft_lstnew(void *content);
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *), \
					void (*del)(void *));
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void*));
void				ft_lstclear(t_list **lst, void (*del)(void*));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstpop_top(t_list **lst);
t_list				*ft_lstpop_bot(t_list *lst);

#endif
