def Indian_Premier_League(s, teams_list):

    count = 0
    while s != 'q' and s != 'Q':
        if count == 12:
            print('Maximum limit of Teams is 12')
            break

        teams_list.append(s)
        count += 1
        s = input()

        if count >= 3:
            n = (count-1) * (count) // 2    
            print('TOTAL MATCHES: ',n)

            for i in range(count - 1):
                for j in range(i + 1, count):
                    print(teams_list[i] + '-VS-' + teams_list[j])

        else:
            print('Minimum 3 Teams are required')


s = input()
teams_list = []

out_ = Indian_Premier_League(s, teams_list)
print(out_)
