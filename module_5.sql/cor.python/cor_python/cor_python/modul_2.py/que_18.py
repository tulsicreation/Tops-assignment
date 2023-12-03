def modify_string(input_str):
    if len(input_str) < 3:
        return input_str
    elif input_str.endswith('ing'):
        return input_str + 'ly'
    else:
        return input_str + 'ing'
    
    


