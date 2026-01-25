def main():
    n=input().strip()
    if n=='{}':
        print(0)
        return
    listy =list(n.split(", "))
    # print(listy)
    if len(listy)==1:
        print(1)
        return
    
        

    listy[0]=listy[0][1]
    listy[len(listy)-1]=listy[len(listy)-1][0]

    # print(listy)

    listyy =set(listy)

    print(len(listyy))

if __name__=='__main__':
    main()