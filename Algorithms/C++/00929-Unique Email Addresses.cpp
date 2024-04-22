class Solution {

/*
    solve:
        -  # of different address that receive emails
        - '.' is ignored for local name, domain name stays same
        - '+' ignores everything after in local name, domain name stays same
    
    algorithm:
        - split the email into 2 string, local & domain
        - parse local string according to . and + rules
        - domain name stays the same
        - set<string>
        - set<parsed email>
        - return the count of the set

    time complexity: O(n) 
    space complexity: O(n)
    
*/ 
public:

    int numUniqueEmails(vector<string>& emails) {
        std::unordered_set<std::string> emailSet;

        for(int i {0}; i < emails.size(); ++i){
            std::string s = emails[i];
            std::string delimiter = "@";
            std::string local = s.substr(0, s.find(delimiter));
            std::string domain = s.substr(s.find(delimiter), s.size()-1);

            // parse local string
            // remove all periods
            // ignore everything after first + if exists
            local.erase(std::remove(local.begin(), local.end(), '.'), local.end());

            // find(+) and take substring of 0 to index of +
            int plusIndex = local.find('+');
            if(local.find('+') != local.npos){
                delimiter = "+";
                local = local.substr(0, local.find(delimiter));
            }
            
            // concatenate local+domain with an "@" to create finished email
            local.append("@");
            local.append(domain);           

            // put emails into our set
            emailSet.insert(local);
        }

        // return count of the set
        return emailSet.size();


    }
};

/*
    solve:
        -  # of different address that receive emails
        - '.' is ignored for local name, domain name stays same
        - '+' ignores everything after in local name, domain name stays same
    
    questions:
        - emails be empty? or empty email? no

    algorithm:
        - split the email into 2 string, local & domain
        - parse local string according to . and + rules
        - domain name stays the same
        - set<string>
        - set<parsed email>
        - return the count of the set

*/