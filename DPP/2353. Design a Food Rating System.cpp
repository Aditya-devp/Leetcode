class FoodRatings {
    unordered_map<string, set<pair<int, string>>> cuisine_rating;
    unordered_map<string, pair<string, int>> food_rating;
public:
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for(int i=0; i < foods.size();++i) {
            cuisine_rating[cuisines[i]].insert({-ratings[i], foods[i]});
            food_rating[foods[i]] = {cuisines[i], ratings[i]};
        }
    }
    
    void changeRating(string food, int newRating) {
        auto& [cuisine, rating] = food_rating[food];
        cuisine_rating[cuisine].erase({-rating, food});
        cuisine_rating[cuisine].insert({-newRating, food});
        rating = newRating;
    }
    
    string highestRated(string cuisine) {
        return cuisine_rating[cuisine].begin()->second;
    }
};
