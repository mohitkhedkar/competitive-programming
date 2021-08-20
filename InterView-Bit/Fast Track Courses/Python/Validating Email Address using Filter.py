#YOUR CODE GOES HERE

def check_email(s):
    try:
        user, www = s.split("@")
        web, ext = www.split(".")
        if not user or not web or not ext:
            return False
        return not any([user != "".join(filter(lambda x: x.isalnum() or x in ["_", "-"], user)),
            web != "".join(filter(lambda x: x.isalnum(), web)) , len(ext)>3])
    except:
        return False


def filter_email(email):
    return(list(filter(check_email,email)))


if __name__ == '__main__':

    n = int(input())
    email = []
    for i in range(n):
        email.append(input())
        
filtered_emails = filter_email(email)
filtered_emails.sort()
print(filtered_emails)